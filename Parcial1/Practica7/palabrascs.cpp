#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>
using namespace std;

void printCad(char *ptr){
    int i = 0;
    while(ptr[i]!='\0'){
        cout << ptr[i];
    }
    cout <<endl;
}

int main(int argc, char const *argv[])
{
    //65 al  90 son los caracteres ascii en mayusculas
    //generar N palabras de tres caracteres
    
    int n;
    int num;
    char token;
    int cont=0;
    int posicion = 0;
    srand (time(NULL));
    //cout << "Palabras aleatorias\nIntroduce la n"<<endl;
    cin >> n;

    char *cadenota=NULL;
    char *iniCad = cadenota;
    char *aux = (char*)malloc(sizeof(char)*4);
    char *iniAux = aux;

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
                *aux = ' ';
                cadenota = (char*)realloc(cadenota,posicion+4);
                for(int j=0;j<4;j++){
                    cadenota[posicion] = iniAux[j];
                    posicion++;
                }
                //if(i == (n-1)){
                    //cadenota = (char*)realloc(cadenota,posicion+1);
                    //cadenota[posicion+1] = '\0';

                //}else{
                    aux = iniAux;
                //}
                
                cont = 0;
                break;
            }

        }

    }

    cout << cadenota <<endl;
    //Now it's time to look for the word

    int flag = 0;
    for(int i=0;i<=posicion;++i){
        if(cadenota[i] == 'I'){
            i++;
            if(cadenota[i]=='P'){
                i++;
                if(cadenota[i]=='N'){
                    cout << "Se ha encontrado la coincidencia IPN"<<endl;
                    flag = 1;
                }
            }
        }
    }

    if(flag == 0){
        cout << "no se encontró la coincidencia de IPN"<<endl;
    }

    return 0;
}