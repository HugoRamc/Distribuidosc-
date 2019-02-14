#include "Rectangulo.h"
#include <iostream>
using namespace std;

Rectangulo::Rectangulo() : superiorIzq(0,0), inferiorDer(0,0)
{ }


Rectangulo::Rectangulo(Coordenada sup, Coordenada inf): superiorIzq(sup.obtenerX() ,sup.obtenerY(), sup.obtenerZ()),inferiorDer(inf.obtenerX(), inf.obtenerY(),inf.obtenerZ())
{ }

void Rectangulo::imprimeEsq()
{
    cout << "Para la esquina superior izquierda.\n";
    cout << "x = " << superiorIzq.obtenerX() << " y = " << superiorIzq.obtenerY() << " z = " << superiorIzq.obtenerZ()<< endl;
    cout << "Para la esquina inferior derecha.\n";
    cout << "x = " << inferiorDer.obtenerX() << " y = " << inferiorDer.obtenerY() << " z = " << inferiorDer.obtenerZ()<< endl;
}

double Rectangulo::obtieneArea(){
    double ancho = inferiorDer.obtenerX() - superiorIzq.obtenerX();
    double largo = superiorIzq.obtenerY() - inferiorDer.obtenerY();
    double profund = superiorIzq.obtenerZ() - inferiorDer.obtenerZ();
    //cout << "largo "<<largo<<" ancho "<<ancho<<" profund: "<<profund<<endl;
    double salida;
    if(ancho==0){
        salida = largo*profund;
    }else{
        if(largo==0){
            salida = ancho*profund;
        }else{
            salida = ancho*largo;
        }
    }
    //cout << "El area es: "<< salida<<endl;
    if(salida < 0){
        salida = salida*-1;
    }
    return salida;
    
}

Coordenada Rectangulo::obtieneSupIzq()
{
    return superiorIzq;
}

Coordenada Rectangulo::obtieneInfDer()
{
    return inferiorDer;
}