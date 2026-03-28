#include <iostream>
using namespace std;

int main() {
	int numero;
	
	cout << "Ingrese un numero decimal: ";
	cin >> numero;
	
	if (numero == 0) {
		cout << "Binario: 0" << endl;
	} else {
		int binario[32]; // arreglo para guardar restos
		int i = 0;
		
		while (numero > 0) {
			binario[i] = numero % 2; // resto (0 o 1)
			cout << "Resto: " << binario[i] << endl; // mostrar restos
			numero = numero / 2;
			i++;
		}
		
		cout << "Numero en binario: ";
		// imprimir al revés
		for (int j = i - 1; j >= 0; j--) {
			cout << binario[j];
		}
		cout << endl;
	}
	
	return 0;
}
