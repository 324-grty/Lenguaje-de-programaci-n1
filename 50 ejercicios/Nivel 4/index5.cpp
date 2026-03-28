#include <iostream>
using namespace std;

int main() {
	int jugador1 = 0, jugador2 = 0;
	int avance1, avance2;
	
	while (jugador1 < 100 && jugador2 < 100) {
		cout << "Ingrese avance Jugador 1: ";
		cin >> avance1;
		
		cout << "Ingrese avance Jugador 2: ";
		cin >> avance2;
		
		jugador1 += avance1;
		jugador2 += avance2;
		
		cout << "Jugador 1 total: " << jugador1 << endl;
		cout << "Jugador 2 total: " << jugador2 << endl;
		cout << "----------------------\n";
	}
	
	if (jugador1 >= 100 && jugador2 >= 100) {
		cout << "¡Empate!" << endl;
	} else if (jugador1 >= 100) {
		cout << "¡Jugador 1 gana!" << endl;
	} else {
		cout << "¡Jugador 2 gana!" << endl;
	}
	
	return 0;
}
