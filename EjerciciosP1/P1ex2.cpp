//Autor : Hugo Ramírez Centeno
//Asignatura: Diseño de Sistemas Distribuidos
//Boleta: 2016630317

/*
Escriba un programa que imprima la altura de un edicicio, si se conoce
el tiempo que tardó una peota de tenis desde que se dejo caer en la parte
mas alta del edificio y hasta llegar al piso
*/

//datos iniciales
//V0 = 0
//X0 = 0
//g = 9.81
//formula para determinar la altura de un edificio dado el tiempo
//A = g*t*t/2

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    double const g = 9.81;
    double tiempo,altura;

    cout << "Bienvenido a calcula la alutura de un edificio\n Introduce el tiempo tardado de la pelota en tocar el suelo\n";
    cin >> tiempo;
    altura  = g*tiempo*tiempo/2;


    cout << "La altura del edificio es: " << altura << "\n";

    return 0;
}
