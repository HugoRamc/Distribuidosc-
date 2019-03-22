#include "respuesta.h"
#include "SocketDatagrama.cpp"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

Respuesta::Respuesta(int puertol){
    //se inicializa el socket para obtener la informacion
    SocketDatagrama sok(puertol);
    struct mensaje recv;
    



    //se recibe la informacion

    sok.recibe(recv);
    cout << "Cadena recibida: " <<recv.arguments <<endl;

    string cad = recv.arguments;
    reverse(cad.begin(), cad.end()); 
    char regreso[cad.length()+1];
    strcpy(regreso, cad.c_str()); 

    cout << "Cadena de regreso "<<regreso<<endl;

    //se prepara el mensaje para el regreso
    struct mensaje men;
        strncpy(men.IP, "127.0.0.1", 16*sizeof(char));
        men.messageType = 0;
        men.puerto = 7201;
        strncpy(men.arguments, regreso, TAM_MAX_DATA);

    SocketDatagrama soksend(7201);

    soksend.envia(men);
    cout << "Paquete enviado de regreso"<<endl;






}

void Respuesta::sendReply(char *respuesta, char *ipCliente, int puertoCliente){

}