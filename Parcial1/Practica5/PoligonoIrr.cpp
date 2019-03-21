#include "PoligonoIrr.h"
#include <iostream>
using namespace std;

int PoligonoIrr::numVertices = 0;

PoligonoIrr::PoligonoIrr(){};
PoligonoIrr::PoligonoIrr(int tam){
    if(tam>0){
        points.reserve(tam);
    }else
    {
        cout<<"no se puede reservar espacio menor que cero"<<endl;
    }
    
}


void PoligonoIrr::anadeVerticep(double xx,double yy){
    Coordenada n(xx,yy);
    points.push_back(n);
    numVertices++;
}

void PoligonoIrr::anadeVerticer(double xx,double yy){
    int pos = points.size();
    if(pos>0){
        pos++;
    }

    Coordenada n(xx,yy);
    points[pos]=n;
    numVertices++;
}

void PoligonoIrr::imprimeVertices(){
    int tam = points.size();
    cout << "El tamaño es: "<<tam<<endl;
    if(tam>0){
        for(int i=0;i<tam;++i){
            cout<<"La coordenada "<<i+1<<" es: x="<<points[i].obtenerX()<<"  y= "<<points[i].obtenerY()<<endl;

        }
    }

}

void PoligonoIrr::numVert(){
    cout << "El numero de vertices creados es: "<<numVertices<<endl;

}
