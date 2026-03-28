#include <iostream>
using namespace std;

int main() {
	int n;
	long long factorial = 1; //Se usa long long para soportar números grandes (aunque tiene límite).
	
	cout << "Ingrese un numero: ";
	cin >> n;
	
	if (n < 0) {
		cout << "No existe factorial para numeros negativos." << endl;
	} else {
		int i = 1;
		while (i <= n) {
			factorial *= i;
			i++;
		}
		
		cout << "El factorial de " << n << " es: " << factorial << endl;
	}
	
	return 0;
}

