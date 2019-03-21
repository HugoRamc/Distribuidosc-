#include "Fecha.h"
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    Fecha a, b, c(21, 9, 1973);
   
    b.inicializaFecha(17, 6 , 2000);
    

    a.muestraFecha();
    b.muestraFecha();
    c.muestraFecha();     
    a.convierte();
    b.convierte();
    c.convierte(); 

    if(a.leapyr()){
        cout << "Es año bisiesto\n";
    }else{
        cout << "No es año bisiesto\n";
    }

    if(b.leapyr()){
        cout << "Es año bisiesto\n";
    }else{
        cout << "No es año bisiesto\n";
    }

    if(c.leapyr()){
        cout << "Es año bisiesto\n";
    }else{
        cout << "No es año bisiesto\n";
    }
    //cuantos bisiestos hay 1 al 2019
    int cont=0;
    for(int i=1;i<=2019;++i){
        b.inicializaFecha(17, 6 , i);
        if(b.leapyr()){
            cont++;
        }
    }

    cout << "Existen "<< cont << " años bisiestos entre 1 y 2019"<<endl;



    return 0;
}

