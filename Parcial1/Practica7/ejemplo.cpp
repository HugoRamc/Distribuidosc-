#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char *cad = NULL;
    int posicion =0;
    char aux1[] = "PER ";
    

    cad = (char*)realloc(cad,posicion+4);

    for(int i=0;i<4;++i){
        cad[posicion]=aux1[i];
        posicion++;

    }

    aux1[0] = 'K';
    aux1[1] = 'E';
    aux1[2] = 'L';
    aux1[3] = 'E';

    cad = (char*)realloc(cad,posicion+4);

    for(int i=0;i<4;++i){
        cad[posicion]=aux1[i];
        posicion++;

    }

    cout << cad << endl;



    return 0;
}