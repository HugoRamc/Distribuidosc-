#include<iostream>
using namespace std;

int main(){
	double precio = 78.7;
	cout.setf(ios::fixed);	//notacion en punto fijo
	cout.setf(ios::showpoint);	//sets the showpoint format flag for the str stream
	cout.precision(2);	//Dos decimales
	cout<<precio<<endl;
	return 0;
}
