#ifndef PoligonoIrr_
#define PoligonoIrr_
#include <vector>
#include <iostream>
#include "Coordenada.h"
using namespace std;
class PoligonoIrr
{
    private:
        vector<Coordenada> points;
        static int numVertices;
    public:
        PoligonoIrr();
        PoligonoIrr(int);
        void anadeVerticep(double,double);
        void anadeVerticer(double,double);
        void imprimeVertices();
        void numVert();
   
};

#endif

