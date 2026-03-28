#include <iostream>
using namespace std;

int main() {
	int numero, suma = 0, digito;
	
	cout << "Ingrese un numero entero: ";
	cin >> numero;
	
	// Convertir a positivo si es negativo
	if (numero < 0) {
		numero = -numero;
	}
	
	while (numero > 0) {
		digito = numero % 10;   // obtiene el último dígito
		suma += digito;         // lo suma
		numero = numero / 10;   // elimina el último dígito
	}
	
	cout << "La suma de los digitos es: " << suma << endl;
	
	return 0;
}
