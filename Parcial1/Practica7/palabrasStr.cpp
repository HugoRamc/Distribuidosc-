#include <string>
#include <string.h>
#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //65 al  90 son los caracteres ascii en mayusculas
    //generar N palabras de tres caracteres
    
    int n;
    int num;
    string token;
    int cont=0;
    srand (time(NULL));
    //cout << "Palabras aleatorias\nIntroduce la n"<<endl;
    cin >> n;

    string cadenota;
    string aux;

    for(int i=0;i<n;++i){
        while(true){
            num = (rand()%90)+1;
            if(num>=65 && num <=90){
                token = (char)num;
                cont++;
                aux = aux+token;
            }

            if(cont==3){
                cout << aux << endl;
                cadenota = cadenota +" "+aux;
                aux = "";
                cont = 0;
                break;
            }

        }

    }

    int flag = 0;
    int posicion = cadenota.length();
    for(int i=0;i<posicion;++i){
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
