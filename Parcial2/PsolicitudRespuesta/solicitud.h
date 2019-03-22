#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class solicitud{
    public:
        solicitud();
        string doOperation(char *IP, int puerto, int operationId, char *arguments);
    private:
        //SocketDatagrama *socketlocal;

};

