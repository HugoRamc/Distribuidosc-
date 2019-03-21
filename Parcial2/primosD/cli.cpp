#include <iostream>
#include <string.h>
#include "SocketDatagrama.cpp"
#include "PaqueteDatagrama.cpp"
using namespace std;

int main(){
  unsigned int n = 111;
  unsigned int n1f = n/3,n2f=(n1f*2),n3f=n-1;
  unsigned int n1i = 2, n2i = n1f+1, n3i = n2f+1;
  unsigned int envio[3];
  int *esprimo;
  int suma = 0;
  /////////ENVIO 1///////////////////////////////
  envio[0] = n;
  envio[1] = n1i;
  envio[2] = n1f;
  //PaqueteDatagrama a((char *)envio,3*sizeof(unsigned int),"127.0.0.1",7000); //Para compu 1
  PaqueteDatagrama a((char *)envio,3*sizeof(unsigned int),"10.100.66.253",7000); //Para compu 1
  PaqueteDatagrama b(5);
  SocketDatagrama s1(6666);
  s1.envia(a);
  ///////////////////////////////////////////////
  ///////ENVIO 2/////////////////////////////////
  envio[1] = n2i;
  envio[2] = n2f;
  a.inicializaDatos((char*)envio);
  a.inicializaIp("127.0.0.1");  //Para compu 2
  s1.envia(a);
  //////////////////////////////////////////////
 /////ENVIA 3///////////////////////////////////
  envio[1] = n3i;
  envio[2] = n3f;
  a.inicializaDatos((char*)envio);
  a.inicializaIp("10.100.66.254"); //Para compu 3
  s1.envia(a);
////////////////////////////////////////////////
///////ESPERAR PARA RECIBIR RESPUESTAS/////
 s1.recibe(b);
 esprimo = (int*)b.obtieneDatos();
 suma+=esprimo[0];
 s1.recibe(b);
 esprimo = (int*)b.obtieneDatos();
 //cout << esprimo[0] << endl;
suma+=esprimo[0];
 s1.recibe(b);
 esprimo = (int*)b.obtieneDatos();
 //cout << esprimo[0] << endl;
suma+=esprimo[0];
  if(suma==0)
    cout << n << " Es número primo" << endl;
    else
    cout << n << " No es número primo" << endl;
  return 0;
}
