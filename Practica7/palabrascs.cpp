#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //65 al  90 son los caracteres ascii en mayusculas
    //generar N palabras de tres caracteres
    
    int n;
    int num;
    char token;
    int cont=0;
    int posicion =3;
    srand (time(NULL));
    //cout << "Palabras aleatorias\nIntroduce la n"<<endl;
    cin >> n;

    char *cadenota=(char*)malloc(sizeof(char));
    char *iniCad = cadenota;
    char *aux = (char*)malloc(sizeof(char)*4);
    char *initAux = aux;

    for(int i=0;i<n;++i){
        while(true){
            num = (rand()%90)+1;
            if(num>=65 && num <=90){
                token = (char)num;
                cont++;
                *aux = token;
                aux++;
            }

            if(cont==3){
                aux++;
                *aux = ' ';
                cout << initAux << endl;
                
                cadenota =(char*)realloc(cadenota, posicion);
                memcpy(cadenota, initAux, 4);
                aux = initAux;
                cont = 0;
                break;
            }

        }

    }

    cout << sizeof(iniCad)<<endl;

    return 0;
}