#include <iostream>
using namespace std;

int main() {
	system("Color D0");
	int num, contador = 0;
	
	cout << "Ingrese un numero (negativo para terminar): ";
	cin >> num;
	
	while (num >= 0) {
		contador++;
		
		cout << "Ingrese otro numero (negativo para terminar): ";
		cin >> num;
	}
	
	cout << "Cantidad de numeros ingresados: " << contador << endl;
	
	return 0;
}

