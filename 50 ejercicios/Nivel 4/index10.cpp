#include <iostream>
using namespace std;

int main() {
	int poblacion, limite;
	int horas = 0;
	
	cout << "Ingrese la poblacion inicial de bacterias: ";
	cin >> poblacion;
	
	cout << "Ingrese el limite de poblacion: ";
	cin >> limite;
	
	while (poblacion <= limite) {
		cout << "Hora " << horas << ": " << poblacion << " bacterias" << endl;
		
		poblacion *= 2;  // se duplica cada hora
		horas++;
	}
	
	cout << "----------------------------------" << endl;
	cout << "Se supero el limite en la hora " << horas << endl;
	cout << "Poblacion final: " << poblacion << endl;
	
	return 0;
}
