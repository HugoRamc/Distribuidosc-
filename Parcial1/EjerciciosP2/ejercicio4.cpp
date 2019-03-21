//Autor: Hugo Enrique Ramírez Centeno
//Grupo: 4CM1

/*
4.- Defina una clase Temperatura que almacene de manera interna un valor de temperatura en
grados Kelvin. También elabore las funciones setTempKelvin, setTempFahrenheit y setTempCelsius que
tomen la temperatura en la escala especificada por el usuario y la almacenen en grados Kelvin.
Asimismo escriba las funciones que impriman el valor almacenado en la clase y en los grados
Centigrados, Kelvin o Fahrenheit, según lo solicite el usuario. Escriba una función principal para
probar la clase
*/
#include "temperatura.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int opc;
    float temp;
    cout << "Introduce la escala deseada para trabajar\n1.- Kelvin\n2.-Celsius\n3.-Fahrenheit"<<endl;
    cin >> opc;

    if(opc == 1 || opc == 2 || opc==3){
        cout << "Introduce la temperatura"<<endl;
        cin >> temp;

        if(opc == 2){//opcion de grados celsius
            temp =  temp+273;
        }else if(opc== 3){
            temp = ((temp-32)*5/9)+273;
        }

        Temperatura Tem(temp);
        Tem.setTempCelsius();
        Tem.setTempFahrenheit();
        Tem.setTempKelvin();

    }else{
        cout << "Introduce una opcion correcta"<<endl;

    }


    return 0;
}
