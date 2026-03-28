#include <iostream>
using namespace std;

int main() {
	int numero, i = 1, contador = 0;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	if (numero <= 1) {
		cout << "No es primo." << endl;
	} else {
		while (i <= numero) {
			if (numero % i == 0) {
				contador++;
			}
			i++;
		}
		
		if (contador == 2) {
			cout << "Es primo." << endl;
		} else {
			cout << "No es primo." << endl;
		}
	}
	
	return 0;
}
