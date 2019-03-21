//Equipo 1  
//Ejercicio 2:
//Un error común difícil de detectar es dividir dos tipos de datos entero s o un entero con 
//un tipo flotante. Elabore un programa para imprimir el resultado de una división entre dos enteros 
//y de un entero con un flotante y determine cuál es el error que ocurre

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int ent1 = 20;
    int ent2 = 8;
    float flot1 = 4.22;
    float flot2 = 36.44;

    cout << "División de enteros " << ent1/ent2 << "\n";
    cout << "División de flotantes " << flot2/flot1 << "\n";
    cout << "Division de entero entre flotante "<< flot2/ent2 << "\n"; 
    cout << "Division de flotante entre entero "<< ent1/flot1 << "\n";

    //la division de dos enteros regresa un entero y trunca los decimales
    //los flotantes conservan los decimales

    return 0;
}
