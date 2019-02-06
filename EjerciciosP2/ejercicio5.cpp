//Autor: Hugo Enrique Ramírez Centeno
//Grupo: 4CM1

/*
5.- Defina una clase llamada Fraccion, la cual almacena un numerador y un denominador enteros.
Debe incluir una función para que el usuario pueda inicializar a ambos, así como una función que
devuelva el resultado de la división entre el numerador y el denominador como un double. Por último
debe existir una función que devuelva a la fracción en su mínima expresión. Por ejemplo la fracción
18/15 deberá imprimirse como 6/5. Pruebe la clase con el código mínimo en el programa principal.
*/

#include "Fraccion.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num,den;
    cout << "Bienvenido a las Fracciones:\nIntroduzca el numerador"<<endl;
    cin >> num;

    cout << "Introduzca el denominador"<<endl;
    cin >> den;
    Fraccion F;
    F.setNumerador(num);
    F.setDenominador(den);
    F.resolverFraccion();
    F.reducirFraccion();

    return 0;
}
