#include <iostream>
using namespace std;

int main() {
	int numero, invertido = 0, digito;
	
	cout << "Ingrese un numero entero: ";
	cin >> numero;
	
	// Manejar negativos
	bool esNegativo = false;
	if (numero < 0) {
		esNegativo = true;
		numero = -numero;
	}
	
	while (numero > 0) {
		digito = numero % 10;             // obtener último dígito
		invertido = invertido * 10 + digito; // construir número invertido
		numero = numero / 10;             // eliminar último dígito
	}
	
	if (esNegativo) {
		invertido = -invertido;
	}
	
	cout << "Numero invertido: " << invertido << endl;
	
	return 0;
}
