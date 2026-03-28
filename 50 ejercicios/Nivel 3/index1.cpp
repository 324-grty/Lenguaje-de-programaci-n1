#include <iostream>
using namespace std;

int main() {
	int numero, contador = 0;
	
	cout << "Ingrese un numero entero: ";
	cin >> numero;
	
	// Convertir a positivo si es negativo
	if (numero < 0) {
		numero -= numero;
	}
	
	// Caso especial para 0
	if (numero == 0) {
		contador = 1;
	} else {
		while (numero > 0) {
			numero = numero / 10;
			contador++;
		}
	}
	
	cout << "Cantidad de digitos: " << contador << endl;
	
	return 0;
}
