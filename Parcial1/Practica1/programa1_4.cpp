#include <iostream>
using namespace std;

int main()
{
	
	int centigrados;
	double fahrenheit;
	cout << "Convertidor de grados centigrados a Fahrenheit\n";
	cout << "introduzca los grados centigrados a convertir\n";
	cin >> centigrados;


	fahrenheit = (9 * static_cast<double>(centigrados))/5 + 32.0;
	cout << "centigrados:"<<centigrados;
	cout << "\nFahrenheit:" << fahrenheit;

	return 0;
}