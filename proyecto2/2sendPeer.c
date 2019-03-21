#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <netdb.h>
#include <strings.h>
#include <string.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <unistd.h>

int puertoEnv = 7200;
int puertoRecv = 7201;
char direccion[] = "127.0.0.1";
float res;



//esta función se va a encargar de recibir los paquetes que han sido perdidos
void *reciveMensajes(void *param){
    int s2,clilen;
    int num,perdidos=0,ant=-1;
    printf("hola desde el hilo\n");
    struct sockaddr_in server_addr, msg_to_client_addr;

   //se crea el segundo socket para recibo de numeros fallidos
   s2 = socket(AF_INET, SOCK_DGRAM, 0);
   /* se asigna una direccion al socket del servidor*/
   bzero((char *)&server_addr, sizeof(server_addr));
   server_addr.sin_family = AF_INET;
   server_addr.sin_addr.s_addr = INADDR_ANY;
   server_addr.sin_port = htons(puertoRecv);
   bind(s2, (struct sockaddr *)&server_addr, sizeof(server_addr));
   clilen = sizeof(msg_to_client_addr);

    while(1) {

      recvfrom(s2, (int *) &num, sizeof(int), 0, (struct sockaddr *)&msg_to_client_addr, &clilen);
      printf("Numero perdido recibido %d\n",num);

      if (num == 0) {
         printf("numeros terminados\n");
         //printf("Numeros perdidos %d\n",perdidos);
         break;
      }

      /*if(ant!=-1 && num!=0){
         if(num-ant!=1){
            perdidos = perdidos + (num-ant)-1;
            //printf("ant %d num %d perdidos %d\n",ant,num,perdidos);
         }
      }
      ant = num;*/
      
   }

}


int main(void)
{
   struct sockaddr_in msg_to_server_addr, client_addr;
   int s, num,i,clilen;
   
   scanf("%d",&num);

   if(num<=0){
      printf("Introduce un numero mayor a cero\n");
      exit(1);
   }
   
   s = socket(AF_INET, SOCK_DGRAM, 0);
   /* rellena la dirección del servidor */
   bzero((char *)&msg_to_server_addr, sizeof(msg_to_server_addr));
   msg_to_server_addr.sin_family = AF_INET;
   msg_to_server_addr.sin_addr.s_addr = inet_addr(direccion);
   msg_to_server_addr.sin_port = htons(puertoEnv);
   
   /* rellena la direcciòn del cliente*/
   bzero((char *)&client_addr, sizeof(client_addr));
   client_addr.sin_family = AF_INET;
   client_addr.sin_addr.s_addr = INADDR_ANY;
   
   /*cuando se utiliza por numero de puertoEnv el 0, el sistema se encarga de asignarle uno */
   client_addr.sin_port = puertoEnv;
   bind(s, (struct sockaddr *)&client_addr,sizeof(client_addr));
   

    //Se ejectuta el hilo en el cual van a escucharse las comunicaciones del otro peer
    pthread_t h1;
    pthread_create(&h1,NULL,reciveMensajes,NULL);

    //
    for(i = 1;i<=num;i+=3){
        sendto(s, (char *)&i, sizeof(int), 0, (struct sockaddr *) &msg_to_server_addr, sizeof(msg_to_server_addr));
    }
    i = 0;
    sendto(s, (char *)&i, sizeof(int), 0, (struct sockaddr *) &msg_to_server_addr, sizeof(msg_to_server_addr));

    pthread_join(h1,NULL);


    printf("El porcentaje de perdida es: %0.2f%c \n", res,'%');
    printf("\n");
    close(s);
}
