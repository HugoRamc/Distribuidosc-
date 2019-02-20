#include <vector>
#include <iostream>
#include "PoligonoIrr.h"
using namespace std;

int main(int argc, char const *argv[])
{
    //vector<int> v;//los vectores se inicializan vacios y pueden crecer dinámicamente
    
    //v.push_back(15); //esta función agrega un elemento al vector

    //cout << "El tamaño del vector es "<<v.size()<<endl;
    cout << "Bienvenido a poligono irregular"<<endl;
    /*PoligonoIrr nlads;
    for(int i=0;i<100000;++i){
        nlads.anadeVerticep(5+i,7+i);
    }
    //clearnlads.imprimeVertices();
    nlads.numVert();*/

    PoligonoIrr nlados(100000);
    for(int i=0;i<10000;++i){
        nlados.anadeVerticer(5+i,7+i);
    }
    nlados.imprimeVertices();


    return 0;
}

//v.reserve() para reservar memoria
//v.resize() para agrandar el tamaño del arreglo
