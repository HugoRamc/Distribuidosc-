//Autor: Hugo Enrique Ramírez Centeno
//Grupo: 4CM1
#include "Fraccion.h"
#include <iostream>
using namespace std;

void Fraccion::setNumerador(int num){
    numerador = num;
}

void Fraccion::setDenominador(int den){
    denominador = den;
}

void Fraccion::resolverFraccion(){
    double res = (double)numerador / (double)denominador;
    cout << "El Resultado de la division de "<< numerador<<"/"<<denominador<<" es: "<<res<<endl;
}

int mcd(int x, int y)
{
    return y ? mcd(y, x % y) : x;
}

void Fraccion::reducirFraccion(){
    int div = mcd(numerador,denominador);
    int num = numerador/div;
    int den = denominador/div;
    cout << "Fraccion "<< numerador<<"/"<<denominador<<" reducido es: "<<num<<"/"<<den<<endl;

}




