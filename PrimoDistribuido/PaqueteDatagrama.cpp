#include "PaqueteDatagrama.h"
#include <iostream>
#include <string.h>
using namespace std;

PaqueteDatagrama::PaqueteDatagrama(){}

PaqueteDatagrama::PaqueteDatagrama(char *data, unsigned int len, char * ipAddr, int pto) {

	datos = new char[len];
	memcpy(datos,data,len);
	strcpy(ip,ipAddr);
	inicializaPuerto(pto);
	longitud = len;
}

PaqueteDatagrama::PaqueteDatagrama(unsigned int longi) {
	longitud = longi;
	datos = new char[longitud];
}

PaqueteDatagrama::~PaqueteDatagrama() { }


char * PaqueteDatagrama::obtieneDireccion() {
	return ip;
}

unsigned int PaqueteDatagrama::obtieneLongitud() {
	return longitud;
}

int PaqueteDatagrama::obtienePuerto() {
	return puerto;
}

char * PaqueteDatagrama::obtieneDatos() {
	return datos;
}

void PaqueteDatagrama::inicializaPuerto(int pto) {
	puerto = pto;
}

void PaqueteDatagrama::inicializaIp(char *ipAddr) {
	strcpy(ip,ipAddr);
}

void PaqueteDatagrama::inicializaDatos(char *data) {
	memcpy(datos,data,longitud);
}
