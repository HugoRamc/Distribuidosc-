#include "ortoedro.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Bienvenido a otroedro 3D"<<endl;
    ortoedro ort = ortoedro(Coordenada(2,3,0),Coordenada(5,1,2));

    cout << "El área del ortoedro es: "<<ort.obtieneArea()<<endl;
    cout << "El Volumen del ortoedro es: "<<ort.obtieneVolumen()<<endl;


    
        


    return 0;
}
