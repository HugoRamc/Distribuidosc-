#include "solicitud.h"
#include "SocketDatagrama.cpp"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

string solicitud::doOperation(char *IP, int puerto, int operationId, char *arguments){
    string cad="a";

    //if(operationId == 0){//0 Request
        struct mensaje men;
        strncpy(men.IP, IP, 16*sizeof(char));
        men.messageType = operationId;
        men.puerto = puerto;
        strncpy(men.arguments, arguments, TAM_MAX_DATA);

        cout <<"Cadena a mandar: "<< men.arguments << endl;

        //mandar el mensaje a través del socket
        SocketDatagrama socketlocal(7200);
        socketlocal.envia(men);
        cout << "Paquete enviado"<<endl;

        //recibir el mensaje a través del socket
        struct mensaje recv;
        SocketDatagrama sokRec(7201);
        sokRec.recibe(recv);
        cout << "paquete recibido"<<endl;

        cout<<"Cadena invertida: " << recv.arguments << endl;
        
        


    //}else if(operationId == 1){//1 reply    }

    return recv.arguments;
}

solicitud::solicitud(){
    
}