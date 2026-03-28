#include <iostream>
using namespace std;

int main() {
	int num, anterior;
	bool creciente = true;
	
	cout << "Ingrese numeros (termina con 0): ";
	cin >> anterior; // leer el primero
	
	while (true) {
		cin >> num;
		
		if (num == 0) {
			break;
		}
		
		if (num <= anterior) {
			creciente = false;
		}
		
		anterior = num;
	}
	
	if (creciente) {
		cout << "La secuencia es estrictamente creciente" << endl;
	} else {
		cout << "La secuencia NO es estrictamente creciente" << endl;
	}
	
	return 0;
}                      

