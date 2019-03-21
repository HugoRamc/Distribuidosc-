#include "ortoedro.h"
#include <iostream>
using namespace std;


void ortoedro::generaVertices(){
    double x,y,z,a,b,c;
    x = esqInfIzq.obtenerX();
    y = esqInfIzq.obtenerY();
    z = esqInfIzq.obtenerZ();
    a = esqSupDer.obtenerX();
    b = esqSupDer.obtenerY();
    c = esqSupDer.obtenerZ();
    Coordenada C1(x,y,z);
    Coordenada C2(a,b,c);
    Coordenada C3(a,b,(c-z));
    Coordenada C4(a,(b-y,(c-z)));
    Coordenada C5(a,(b-y),c);
    Coordenada C6(x,b,c);
    Coordenada C7(x,b,(c-z));
    Coordenada C8(a,(b-y),c);

    R1 = Rectangulo(C1,C3);
    R2 = Rectangulo(C7,C2);
    R3 = Rectangulo(C4,C2);
    R4 = Rectangulo(C1,C6);
    R5 = Rectangulo(C8,C2);
    R6 = Rectangulo(C1,C5);

    cout << "C1 x = " << C1.obtenerX() << " y = " << C1.obtenerY() << " z = " << C1.obtenerZ()<< endl;
    cout << "C2 x = " << C2.obtenerX() << " y = " << C2.obtenerY() << " z = " << C2.obtenerZ()<< endl;
    cout << "C3 x = " << C3.obtenerX() << " y = " << C3.obtenerY() << " z = " << C3.obtenerZ()<< endl;
    cout << "C4 x = " << C4.obtenerX() << " y = " << C4.obtenerY() << " z = " << C4.obtenerZ()<< endl;
    cout << "C5 x = " << C5.obtenerX() << " y = " << C5.obtenerY() << " z = " << C5.obtenerZ()<< endl;
    cout << "C6 x = " << C6.obtenerX() << " y = " << C6.obtenerY() << " z = " << C6.obtenerZ()<< endl;


}


ortoedro::ortoedro(Coordenada C1,Coordenada C2){
    esqInfIzq = C2;
    esqSupDer = C1;
    generaVertices();
}

double ortoedro::obtieneVolumen(){
    double largo = esqSupDer.obtenerX() - esqInfIzq.obtenerX();
    double ancho = esqSupDer.obtenerY() - esqInfIzq.obtenerY();
    double profundidad = esqSupDer.obtenerZ() - esqInfIzq.obtenerZ(); 

    return (largo*ancho*profundidad);
}

double ortoedro::obtieneArea(){
    double res = R1.obtieneArea()+R2.obtieneArea()+R3.obtieneArea()+R4.obtieneArea()+R5.obtieneArea()+R6.obtieneArea();
    return res;

}

void ortoedro::obtieneVertices(){
    generaVertices();

}