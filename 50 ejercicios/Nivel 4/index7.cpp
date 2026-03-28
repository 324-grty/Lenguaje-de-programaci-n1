#include <iostream>
using namespace std;

int main() {
	int stock, vendidos;
	
	cout << "Ingrese el stock inicial: ";
	cin >> stock;
	
	while (stock > 0) {
		cout << "Ingrese cantidad vendida: ";
		cin >> vendidos;
		
		if (vendidos <= stock) {
			stock -= vendidos;
			cout << "Stock restante: " << stock << endl;
		} else {
			cout << "No hay suficiente stock.\n";
		}
		
		cout << "----------------------\n";
	}
	
	cout << "Stock agotado." << endl;
	
	return 0;
}
