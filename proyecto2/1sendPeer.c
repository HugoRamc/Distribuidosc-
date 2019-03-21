#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <netdb.h>
#include <strings.h>
#include <string.h>
#include <arpa/inet.h>

int puerto = 7200;
char direccion[] = "127.0.0.1";

int main(void)
{
   struct sockaddr_in msg_to_server_addr, client_addr;
   int s, num,i;
   float res;
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
   msg_to_server_addr.sin_port = htons(puerto);
   
   /* rellena la direcciòn del cliente*/
   bzero((char *)&client_addr, sizeof(client_addr));
   client_addr.sin_family = AF_INET;
   client_addr.sin_addr.s_addr = INADDR_ANY;
   
   /*cuando se utiliza por numero de puerto el 0, el sistema se encarga de asignarle uno */
   client_addr.sin_port = puerto;
   bind(s, (struct sockaddr *)&client_addr,sizeof(client_addr));
   /*rellena el mensaje */

   for(i = 1;i<=num;i+=2){
      sendto(s, (char *)&i, sizeof(int), 0, (struct sockaddr *) &msg_to_server_addr, sizeof(msg_to_server_addr));
   }
   i = 0;
   sendto(s, (char *)&i, sizeof(int), 0, (struct sockaddr *) &msg_to_server_addr, sizeof(msg_to_server_addr));


   /* se bloquea esperando respuesta */
   recvfrom(s, (float *)&res, sizeof(float), 0, NULL, NULL);
   printf("El porcentaje de perdida es: %0.2f%c \n", res,'%');
   printf("\n");
   close(s);
}

