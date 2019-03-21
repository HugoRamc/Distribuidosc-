#include "temperatura.h"
#include <iostream>
using namespace std;

Temperatura::Temperatura(float temk){
    tempK = temk;
}

void Temperatura::setTempCelsius(){
    float celsius = tempK - 273;
    tempC = celsius;
    cout << "La temperatura "<< tempK<< " en Celsius es: "<<celsius<<endl;

}

void Temperatura::setTempFahrenheit(){
    float fahren = ((tempK - 273) * 9/5)+32;
    tempF = fahren;
    cout << "La temperatura "<< tempK<< " en Fahrenhet es: "<<fahren<<endl;
}

void Temperatura::setTempKelvin(){
    cout << "La temperatura "<< tempK<< " en Kelvin es: "<<tempK<<endl;
}