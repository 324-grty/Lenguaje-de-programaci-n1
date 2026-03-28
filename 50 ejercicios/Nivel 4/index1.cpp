#include <iostream>
using namespace std;

int main() {
	int secreto = 7; // número secreto
	int intento;
	
	cout << "Adivina el numero (entre 1 y 10): ";
	cin >> intento;
	
	while (intento != secreto) {
		if (intento < secreto) {
			cout << "Muy bajo. Intenta de nuevo: ";
		} else {
			cout << "Muy alto. Intenta de nuevo: ";
		}
		cin >> intento;
	}
	
	cout << "¡Correcto! Adivinaste el numero. el numero es: "<<intento<< endl;
	
	return 0;
}
