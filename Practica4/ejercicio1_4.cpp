#include "Rectangulo.h"
#include <iostream>
using namespace std;

void ejercicio1(){
    Rectangulo rectangulo2(Coordenada(2,3),Coordenada(5,1));
    double ancho, alto;

    cout << "Calculando el área de un rectángulo dadas sus coordenadas en un planocartesiano:\n";
    rectangulo2.imprimeEsq();
    alto = rectangulo2.obtieneSupIzq().obtenerY() -rectangulo2.obtieneInfDer().obtenerY();
    ancho = rectangulo2.obtieneInfDer().obtenerX() -rectangulo2.obtieneSupIzq().obtenerX();
    cout << "El área del rectángulo es = " << ancho*alto << endl;

}



int main( )
 {
    //Rectangulo rectangulo2(2,3,5,1);
    Rectangulo rectangulo1(Coordenada(2,3),Coordenada(5,1));

    
    
    return 0;
 }


