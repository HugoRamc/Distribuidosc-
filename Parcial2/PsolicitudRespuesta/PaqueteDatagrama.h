#include <iostream>
#ifndef PAQDAT_H_
#define PAQDAT_H_
using namespace std;
class PaqueteDatagrama {

private:
char *datos;
//Almacena los datos
char ip[16];
//Almacena la IP
unsigned int longitud;
//Almacena la longitude de la cadena de datos
int puerto;
//Almacena el puerto

public:
PaqueteDatagrama(char *, unsigned int, char *, int );
PaqueteDatagrama();
PaqueteDatagrama(unsigned int );
~PaqueteDatagrama();
char *obtieneDireccion();
unsigned int obtieneLongitud();
int obtienePuerto();
char *obtieneDatos();
void inicializaPuerto(int);
void inicializaIp(char *);
void inicializaDatos(char *);
};
#endif
