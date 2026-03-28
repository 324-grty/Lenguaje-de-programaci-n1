#include <iostream>
using namespace std;

int main() {
	int numero;
	int mayor = 0;
	
	cout << "Ingrese numeros.\n(Ingrese 0 para terminar): ";
	cin >> numero;
	
	// Si el primer número no es 0, lo tomamos como mayor inicial
	if (numero != 0) {
		mayor = numero;
	}
	
	while (numero != 0) {
		if (numero > mayor) {
			mayor = numero;
		}
		cin >> numero;
	}
	
	if (mayor != 0) {
		cout << "El numero mayor es: " << mayor << endl;
	} else {
		cout << "No se ingresaron numeros validos." << endl;
	}
	
	return 0;
}
