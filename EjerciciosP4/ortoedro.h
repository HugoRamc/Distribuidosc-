#include "Rectangulo.h"
#ifndef ortoedro_
#define ortoedro_
class ortoedro
{
private:
    Rectangulo R1,R2,R3,R4,R5,R6;
    Coordenada esqInfIzq,esqSupDer;
    bool generaOrtoedro(Coordenada ,Coordenada);
    void generaRectangulos();
    void generaVertices();
public:
    ortoedro(Coordenada,Coordenada);
    ortoedro();
    void obtieneVertices();
    double obtieneArea();
    double obtieneVolumen();
    
    
};



#endif