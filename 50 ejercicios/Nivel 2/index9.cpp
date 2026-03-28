#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double numero;
	
	cout << "Ingrese un numero positivo: ";
	cin >> numero;
	
	while (numero < 0) {
		cout << "Numero invalido. Debe ser positivo.\n";
		cout << "Ingrese un numero positivo: ";
		cin >> numero;
	}
	
	cout << "La raiz cuadrada es: " << sqrt(numero) << endl;
	//Cuando el número es válido, se calcula la raíz con sqrt() (de <cmath>).
	
	return 0;
}
