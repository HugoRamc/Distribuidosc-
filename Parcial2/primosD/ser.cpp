#include <iostream>
#include "SocketDatagrama.cpp"
#include "PaqueteDatagrama.cpp"
using namespace std;

int calculaPrimo(unsigned int n, unsigned int ini, unsigned int fin) {
        int con = 0;
        cout <<"calculaPrimo: " << n <<" "<<ini << " " << fin << endl;
        for (int i = ini; i < fin; i++) {
            if (n % i == 0) {
                con++;
              //  break;
            }
        }
        return con;
    }


int main(){

  PaqueteDatagrama b(20);
  SocketDatagrama s1(7000);
  unsigned int *res;
  int primo[1];
  do{
	  s1.recibe(b);
	  res = (unsigned int *)b.obtieneDatos();
	  primo[0] = calculaPrimo(res[0],res[1],res[2]);
	  cout << "Enviar: " << primo[0] << endl;
	  b.inicializaDatos((char*)primo);
	  b.inicializaPuerto(6666);
	  s1.envia(b);
  }while(1);
  return 0;
}
