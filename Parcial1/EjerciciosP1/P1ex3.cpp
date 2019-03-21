//Autor : Hugo Ramírez Centeno
//Asignatura: Diseño de Sistemas Distribuidos
//Boleta: 2016630317

/*
Escriba un programa que reciba del usuario un valor enterno del tiempo en segundos
, y que imprima su equivalente en horas, minutos y segundos Por ejemplo si el usuario introduce 50381, 
entonces el programa debe imprimir:13 horas, 59 minutos y 41 segundos.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int horas, minutos, segundos,aux;
    int tiempo;
    cout << "Convertir el tiempo\nIntroduce el tiempo en segundos\n";
    cin >> tiempo;
    segundos = tiempo % 60;
    minutos = tiempo/ 60;

    if (minutos >= 60) {
        horas = minutos / 60;
        minutos = minutos % 60;  

    }else{
        horas = 0;

    }

    cout <<  "El tiempo convertido es: "<< horas << " horas, "<<minutos<<" minutos y "<< segundos << " segundos.\n";
    
}
