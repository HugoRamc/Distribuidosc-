//Equipo 1
//Ejercicio 1: Elabore un programa que encuentre el área de un círculo declarando la constante PI, el usuario debe proporcionar el radio. 
//Intente modificar PI dentro del programa, ¿Qué ocurre? 

#include <iostream>
using namespace std;

int main( )
{
    const double PI = 3.1415926;
    double radio;
    double area;

    cout << "Hola Bienvenido a calcula el área \n; Introduce el radio del círculo\n";
    cin >> radio;

    area = 2 * PI * radio;
    cout << "El área del circulo es: "<< area << "\n";

    //realizar los casos en los que se pide modificar el valor de la constante de PI
    //PI = 20;
    //cout << "El área del circulo es: "<< area << "\n";

    //** El compilador arroja que la variable PI ha sido asignada como solo de lectura por lo que no pdrá ser utilizada

}