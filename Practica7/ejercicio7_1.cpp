#include <string>
#include <string.h>
#include <iostream>
using namespace std;


void ejercicio1(){
    /*Ejercicio 1.- Pruebe que el siguiente código no funciona como se espera
    explique por qué*/
    int n;
    string line;
    cin >> n;
    cin.ignore();
    std::getline(std::cin, line);

    cout << ""<< n<<endl;
    cout << line<< endl;

    //se queda almacenado en el buffer un salto de linea y la funcion getline lo lee y da por terminado 
}

void ejercicio2(){
    string cadena("ESCOM");
    //cout << cadena.at(6) << endl;

    cout << cadena[6] << endl;

}


int main(int argc, char const *argv[])
{
    ejercicio2();

    return 0;
}





