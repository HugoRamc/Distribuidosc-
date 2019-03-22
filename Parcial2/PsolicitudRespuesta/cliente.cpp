#include <string.h>
#include <string>
#include <stdio.h>
#include <bits/stdc++.h> 
#include "solicitud.h"
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    char direccion[] = "127.0.0.1";
    string cadena;
    int operacion = 0;//0 para request 1 para reply
    cout << "Introduce una cadena"<<endl;
    getline(cin,cadena);


    solicitud cliente;
    string respuesta = cliente.doOperation (direccion,7200,operacion, &cadena[0]);

    //cout << "La respuesta del servidor es" << respuesta << endl;




    return 0;
}
