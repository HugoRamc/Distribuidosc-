ejercicio2_5.o:	ejercicio2_5.cpp PoligonoIrr.o
	g++ ejercicio2_5.cpp PoligonoIrr.o Coordenada.o -o ejercicio2_5.o
PoligonoIrr.o: PoligonoIrr.cpp PoligonoIrr.h Coordenada.o
	g++ PoligonoIrr.cpp -c
Coordenada.o: Coordenada.cpp Coordenada.h
	g++ Coordenada.cpp -c