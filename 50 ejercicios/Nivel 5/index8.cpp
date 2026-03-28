#include <iostream>
using namespace std;

int main() {
	int num, i = 1, suma = 0;
	
	cout << "Ingrese un numero: ";
	cin >> num;
	
	while (i < num) {
		if (num % i == 0) {
			suma += i;
		}
		i++;
	}
	
	if (suma == num) {
		cout << "El numero es perfecto" << endl;
	} else {
		cout << "El numero NO es perfecto" << endl;
	}
	
	return 0;
}

