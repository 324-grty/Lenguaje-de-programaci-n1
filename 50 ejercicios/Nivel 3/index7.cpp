#include <iostream>
using namespace std;

int main() {
	int a, b, temp;
	
	cout << "Ingrese el primer numero: ";
	cin >> a;
	cout << "Ingrese el segundo numero: ";
	cin >> b;
	
	// Algoritmo de Euclides
	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	
	cout << "El MCD es: " << a << endl;
	
	return 0;
}
