#include "Coordenada.h"
#include "PoligonoIrreg.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main( )
{
  	srand (time(NULL));

	int numvertices =(rand() % 50)+1;
	PoligonoIrreg poligonoIrreg;
	cout<<"Num de vertices: "<<numvertices<<endl;

	for(int i=0; i<numvertices; i++){
		double dato1, dato2;
			do{
				dato1 =static_cast<double>(rand() % 200 - 100) +1;
				dato2 =static_cast<double>(rand() % 200 - 100) +1;
			}while(dato1 == 0 || dato2 == 0);

		double decimales = (static_cast<double>(rand() %888 + 111) * 0.001);
			dato1 = dato1 + decimales;
		decimales = (static_cast<double>(rand() %888 + 111) * 0.001);
			dato2 = dato2 + decimales;

		poligonoIrreg.anadeVertice(Coordenada(dato1,dato2));

	}

	poligonoIrreg.ordenaA();

	return 0;
}
