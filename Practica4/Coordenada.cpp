#include "Coordenada.h"
#include <iostream>
using namespace std;

Coordenada::Coordenada(double r, double t) //: x(xx), y(yy)
 { 
    x = r * cos(t);
    y = r * sin(t);
    //2,3,5,1
    cout<< "x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
 }

 /*Coordenada::Coordenada(double r, double t) //: x(xx), y(yy)
 { 
    x = r;
    y = t;
    //2,3,5,1
    cout<< "x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
 }*/

 double Coordenada::obtenerX()
{
 return x;
 }

 double Coordenada::obtenerY()
 {
 return y;
 }