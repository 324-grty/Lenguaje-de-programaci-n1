#include <iostream>
using namespace std;

int main() {
	char c;
	
	cout << "Ingrese caracteres (termina con .): ";
	
	cin >> c; // lee el primer carácter
	while (c != '.') {
		cout << c; // opcional: mostrar lo leído
		cin >> c;  // leer el siguiente
	}
	
	return 0;
}
