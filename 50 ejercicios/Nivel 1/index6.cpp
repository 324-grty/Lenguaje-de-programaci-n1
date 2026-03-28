#include <iostream>
using namespace std;

int main() {
	system("Color B");
	int num, suma = 0;
	
	cout << "Ingrese un numero \n0= Salir: ";
	cin >> num;
	
	while (num != 0) {
		suma += num;
		
		cout << "Ingrese otro numero \n0= Salir: ";
		cin >> num;
	}
	
	cout << "La suma total es: " << suma << endl;
	
	return 0;
}

