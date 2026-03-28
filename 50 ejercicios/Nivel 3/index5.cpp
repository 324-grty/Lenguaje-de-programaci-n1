#include <iostream>
using namespace std;

int main() {
	int a, b;
	long long resultado = 1;
	
	cout << "Ingrese la base (a): ";
	cin >> a;
	
	cout << "Ingrese el exponente (b): ";
	cin >> b;
	
	if (b < 0) {
		cout << "No se permiten exponentes negativos en este programa." << endl;
	} else {
		int i = 0;
		while (i < b) {
			resultado *= a;
			i++;
		}
		
		cout << "Resultado: " << resultado << endl;
	}
	
	return 0;
}

