#include "numero.h"

Numero::Numero(int val){
    num = val;
    primo = true;
}

void Numero::setNoPrimo(){
    primo = false;
}

int Numero::getNum(){
    return num;
}

bool Numero::isPrimo(){
    return primo;
}