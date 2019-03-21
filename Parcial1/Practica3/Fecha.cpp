#include "Fecha.h"
#include <iostream>
using namespace std;

Fecha::Fecha(int dd, int mm, int aaaa):dia(dd),mes(mm),anio(aaaa)
{
  if((mes<1)||(mes>12)){
    cout<<"Valor ilegal para el mes\n"<<endl;
    exit(1);
  }
  if((dia<1)||(dia>32)){
    cout<<"Valor ilegal para el dia\n"<<endl;
    exit(1);
  }
  if((anio<1)||(anio>2020)){
    cout<<"Valor ilegal para el año\n"<<endl;
    exit(1);
  }
}
void Fecha::inicializaFecha(int dd, int mm, int aaaa)
{
  anio = aaaa;
  mes = mm;
  dia = dd;
  return;
}
void Fecha::muestraFecha()
{
  cout << "La fecha es(dia-mes-año): " << dia << "-" << mes << "-" << anio << endl;
  return;
}
int Fecha::convierte(){
  return anio*10000+mes*100+dia;
}
bool Fecha::bisiesto(){
  if((anio%4)==0 && (anio%100)!=0)
    //cout<<"El año "<<anio<<" es bisiesto"<<endl;
    return true;
  else{
    //cout<<"El año "<<anio<<" NOO es bisiesto"<<endl;
    if((anio%400)==0)
        return true;
      else
        return false;
  }
}
void Fecha::es_bisiesto(bool x){
  if(x)
    cout<<"El año "<<anio<<" es bisiesto"<<endl;
  else
    cout<<"El año "<<anio<<" NOO es bisiesto"<<endl;
  return;
}
