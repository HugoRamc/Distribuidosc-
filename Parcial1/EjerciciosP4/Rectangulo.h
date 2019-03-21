#include "Coordenada.h"
#ifndef Rectangulo_
#define Rectangulo_
class Rectangulo
 {
    private:
        Coordenada superiorIzq;
        Coordenada inferiorDer;
    public:
        Rectangulo();
        Rectangulo(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer);
        Rectangulo(Coordenada sup, Coordenada inf);
    void imprimeEsq();
    double obtieneArea();
    Coordenada obtieneSupIzq();
    Coordenada obtieneInfDer();
     
 };

#endif