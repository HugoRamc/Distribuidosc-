#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <netdb.h>
#include <strings.h>

int puerto = 7200;

int main(void)
{
   int num,ant=-1,perdidos=0;
   int s, res, clilen;
   float perdida;
   struct sockaddr_in server_addr, msg_to_client_addr;
   
   s = socket(AF_INET, SOCK_DGRAM, 0);
   
   /* se asigna una direccion al socket del servidor*/
   bzero((char *)&server_addr, sizeof(server_addr));
   server_addr.sin_family = AF_INET;
   server_addr.sin_addr.s_addr = INADDR_ANY;
   server_addr.sin_port = htons(puerto);
   bind(s, (struct sockaddr *)&server_addr, sizeof(server_addr));
   clilen = sizeof(msg_to_client_addr);

   while(1) {

      recvfrom(s, (char *) &num, sizeof(int), 0, (struct sockaddr *)&msg_to_client_addr, &clilen);
      //printf("%d\n",num);

      if (num == 0) {
         printf("numeros terminados\n");
         printf("Numeros perdidos %d\n",perdidos);
         break;
      }

      if(ant!=-1 && num!=0){
         if(num-ant!=1){
            perdidos = perdidos + (num-ant)-1;
            //printf("ant %d num %d perdidos %d\n",ant,num,perdidos);
         }
      }
      ant = num;
      
   }
   /* envía la petición al cliente. La estructura msg_to_client_addr contiene la dirección socket del cliente */
      perdida = ((float)perdidos * 100)/ant;
      printf("porcentaje %0.2f\n",perdida);
      sendto(s, (char *)&perdida, sizeof(float), 0, (struct sockaddr *)&msg_to_client_addr, clilen);
}

