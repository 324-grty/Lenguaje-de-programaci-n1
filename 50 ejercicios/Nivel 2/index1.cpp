#include <iostream>
using namespace std;

int main() {
	int edad;
	
	cout << "Ingrese una edad (0 - 120): ";
	cin >> edad;
	
	while (edad < 0 || edad > 120) {
		cout << "Edad invalida. Intente nuevamente.\n";
		cout << "Ingrese una edad (0 - 120): ";
		cin >> edad;
	}
	
	cout << "Edad valida ingresada, tienes: " << edad << " años" << endl;
	
	return 0;
}
