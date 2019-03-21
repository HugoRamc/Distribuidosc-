ejercicio6: ejercicio6.cpp ortoedro.o
	g++ ejercicio6.cpp ortoedro.o Rectangulo.o Coordenada.o -o ejercicio6
ortoedro.o: ortoedro.cpp Rectangulo.o Coordenada.o
	g++ ortoedro.cpp -c
Rectangulo.o: Rectangulo.cpp Rectangulo.h Coordenada.o
	g++ Rectangulo.cpp -c
Coordenada.o: Coordenada.cpp Coordenada.h
	g++ Coordenada.cpp -c 