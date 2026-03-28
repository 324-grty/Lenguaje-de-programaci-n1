#include <iostream>
using namespace std;

int main() {
	int monto;
	
	cout << "Ingrese el monto a retirar (multiplo de 10): ";
	cin >> monto;
	
	while (monto % 10 != 0) {
		cout << "Monto invalido. Debe ser multiplo de 10.\n";
		cout << "Ingrese nuevamente el monto: ";
		cin >> monto;
	}
	
	cout << "Monto valido ingresado: " << monto << endl;
	
	return 0;
}
