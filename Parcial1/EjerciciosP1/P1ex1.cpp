//Autor : Hugo Ramírez Centeno
//Asignatura: Diseño de Sistemas Distribuidos
//Boleta: 2016630317


/*1.- Se desea calcular la raiz cuadrada de un número entero utilizando
el algoritmo babilónico: Investigue en internet el algoritmo y prográmelo,
haciendo n del tipo double y el resultado con cuatro decimales
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Calular la Raiz Cuadrada Algoritmo Babilónico \nIntroduce un numero: \n";
    cin >> num;

    double h = 0.00001, raiz = h;
    while(raiz * raiz < num){
        raiz+=h;

    }

    cout.setf(ios::fixed);	//notacion en punto fijo
	cout.setf(ios::showpoint);	//sets the showpoint format flag for the str stream
	cout.precision(4);	//Dos decimales
    cout << "La raiz de "<<num <<" es: "<<raiz << endl;
    




}
