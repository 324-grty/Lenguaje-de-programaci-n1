#include <iostream>
using namespace std;

int main() {
	int anio;
	
	cout << "Ingrese un año (mayor a 1900 y menor a 2026): ";
	cin >> anio;
	
	while (anio < 1900 || anio > 2026) {
		cout << "Año invalido. Intente nuevamente.\n";
		cout << "Ingrese un año (mayor a 1900 y menor a 2026): ";
		cin >> anio;
	}
	
	cout << "Año valido. El año es: " << anio << endl;
	
	return 0;
}
