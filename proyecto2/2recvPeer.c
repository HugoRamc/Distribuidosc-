#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <netdb.h>
#include <strings.h>
#include <pthread.h>
#include <unistd.h>
#include <arpa/inet.h>

int puertoRecv = 7200;
int puertoSend = 7201;
char direccion[] = "127.0.0.1";
int s;



struct numPerdidos
{
    int anterior;
    int actual;
};



void *sendNumber(void *param){
   struct numPerdidos *per = (struct numPerdidos *)param;
   int ant = per->anterior;
   int num = per->actual;
   int i,s2;

   struct sockaddr_in msg_to_server_addr, client_addr;
   //se crea el segundo socket para mandar los numeros perdidos
   s2 = socket(AF_INET, SOCK_DGRAM, 0);
   /* rellena la dirección del servidor */
   bzero((char *)&msg_to_server_addr, sizeof(msg_to_server_addr));
   msg_to_server_addr.sin_family = AF_INET;
   msg_to_server_addr.sin_addr.s_addr = inet_addr(direccion);
   msg_to_server_addr.sin_port = htons(puertoSend);
   
   /* rellena la direcciòn del cliente*/
   bzero((char *)&client_addr, sizeof(client_addr));
   client_addr.sin_family = AF_INET;
   client_addr.sin_addr.s_addr = INADDR_ANY;
   
   /*cuando se utiliza por numero de puerto el 0, el sistema se encarga de asignarle uno */
   client_addr.sin_port = puertoSend;
   bind(s2, (struct sockaddr *)&client_addr,sizeof(client_addr));


   for(i = ant+1;i<num;++i){
      printf("numero perdido %d\n",i);
      sendto(s2, (int *)&i, sizeof(int), 0, (struct sockaddr *) &msg_to_server_addr, sizeof(msg_to_server_addr));
      printf("numero enviado\n");
   }
   printf("\n");


}


int main(void)
{
   int num,ant=-1,perdidos=0;
   int res, clilen;
   float perdida;
   struct sockaddr_in server_addr, msg_to_client_addr;
   
   s = socket(AF_INET, SOCK_DGRAM, 0);
   
   /* se asigna una direccion al socket del servidor*/
   bzero((char *)&server_addr, sizeof(server_addr));
   server_addr.sin_family = AF_INET;
   server_addr.sin_addr.s_addr = INADDR_ANY;
   server_addr.sin_port = htons(puertoRecv);
   bind(s, (struct sockaddr *)&server_addr, sizeof(server_addr));
   clilen = sizeof(msg_to_client_addr);


   while(1) {

      recvfrom(s, (char *) &num, sizeof(int), 0, (struct sockaddr *)&msg_to_client_addr, &clilen);
      printf("Recibido %d\n",num);

      if (num == 0) {
         printf("numeros terminados\n");
         break;
      }

      if(ant!=-1 && num!=0){
         if(num-ant!=1){
            //se ejecuta el hilo y se mandan los numeros faltantes
            struct numPerdidos per;

            per.actual = num;
            per.anterior = ant;

            pthread_t h1;
            pthread_create(&h1,NULL,sendNumber,(void *)&per);



         }
      }
      ant = num;
      
   }
   /* envía la petición al cliente. La estructura msg_to_client_addr contiene la dirección socket del cliente */
      //perdida = ((float)perdidos * 100)/ant;
      //printf("porcentaje %0.2f\n",perdida);
      //sendto(s, (char *)&perdida, sizeof(float), 0, (struct sockaddr *)&msg_to_client_addr, clilen);
}
