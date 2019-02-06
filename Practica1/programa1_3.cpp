#include <iostream>
using namespace std;

int main()
{
	
	double centigrados,fahrenheit;
	cout << "Convertidor de grados centigrados a Fahrenheit\n";
	cout << "introduzca los grados centigrados a convertir\n";
	cin >> centigrados;

	fahrenheit = (9 * centigrados)/5 + 32.0;
	cout << "centigrados:"<<centigrados;
	cout << "\nFahrenheit:" << fahrenheit;

	return 0;
}