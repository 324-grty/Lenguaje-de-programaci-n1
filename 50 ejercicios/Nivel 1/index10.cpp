#include <iostream>
using namespace std;

int main() {
	int numero;
	int producto = 1;
	
	while (producto <= 500) {
		cout << "Ingrese un numero: ";
		cin >> numero;
		
		producto *= numero;
		
		cout << "Producto actual: " << producto << endl;
	}
	
	cout << "El producto ha superado 500. Resultado final: " << producto << endl;
	
	return 0;
}
