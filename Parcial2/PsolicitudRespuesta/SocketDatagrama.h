#ifndef SocketDatagrama_
#define SocketDatagrama_
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include "mensaje.h"
using namespace std;
class SocketDatagrama{
public:
  SocketDatagrama(int);
  ~SocketDatagrama();
  //Recibe un paquete tipo datagrama proveniente de este socket
  int recibe(struct mensaje &p);
  //Envía un paquete tipo datagrama desde este socket
  int envia(struct mensaje &p);
private:
  struct sockaddr_in direccionLocal;
  struct sockaddr_in direccionForanea;
  int s; //ID socket
};
#endif
