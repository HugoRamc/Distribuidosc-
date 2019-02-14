#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

class Fecha{
	private:
		int dia;
		int mes;
		int anio;
		char arreglo[500000];

	public:
		Fecha(int=3, int=4, int=2014);
		void inicializaFecha(int,int,int);
		void muestraFecha();
		int masVieja(Fecha fecha1, Fecha fecha2);
		int convierte();
};

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

void Fecha::inicializaFecha(int dd,int mm,int aaaa){
	anio=aaaa;
	mes=mm;
	dia=dd;
	return;
}

void Fecha::muestraFecha(){
	cout << "La Fecha es(dia-mes-anio): " << dia << "-" << mes << "-" << anio << endl;
	return;
}

int masVieja(Fecha fecha1, Fecha fecha2){
	int f1,f2;
	f1 = fecha1.convierte();
	f2 = fecha2.convierte();
	if(f1>f2){
		return 1;
	}
	else if(f1==f2){
		return 0;
	}
	else{
		return -1;
	}
}

int Fecha::convierte() {
	return anio*10000+mes*100+dia;
}

int main(){
	int i,dia1,mes1,anio1,dia2,mes2,anio2;
	Fecha a,b,c(21,9,1973);
	b.inicializaFecha(17,6,2000);
	srand(time(NULL));
	for(i=1;i<100000;i++){
		dia1 = 1 + rand() % 31;
		mes1 = 1 + rand() % 12;
		anio1 = 1 + rand() % 2019;
		dia2 = 1 + rand() % 31;
		mes2 = 1 + rand() % 12;
		anio2 = 1 + rand() % 2019;
		a.inicializaFecha(dia1,mes1,anio1);
		b.inicializaFecha(dia2,mes2,anio2);
		masVieja(a,b);
	}
}
