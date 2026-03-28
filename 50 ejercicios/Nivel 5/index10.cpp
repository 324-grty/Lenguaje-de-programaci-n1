#include <iostream>
using namespace std;

int main() {
	int j1, j2;
	int puntos1 = 0, puntos2 = 0;
	
	while (puntos1 < 3 && puntos2 < 3) {
		cout << "\nJugador 1 (1.Piedra 2.Papel 3.Tijera): ";
		cin >> j1;
		
		cout << "Jugador 2 (1.Piedra 2.Papel 3.Tijera): ";
		cin >> j2;
		
		if (j1 == j2) {
			cout << "Empate\n";
		} else if (
				   (j1 == 1 && j2 == 3) ||
				   (j1 == 2 && j2 == 1) ||
				   (j1 == 3 && j2 == 2)
				   ) {
			cout << "Gana Jugador 1\n";
			puntos1++;
		} else {
					   cout << "Gana Jugador 2\n";
					   puntos2++;
				   }
				   
				   cout << "Marcador -> J1: " << puntos1
				   << " | J2: " << puntos2 << endl;
	}
	
	if (puntos1 == 3) {
		cout << "\nJugador 1 gana el juego\n";
	} else {
		cout << "\nJugador 2 gana el juego\n";
	}
	
	return 0;
}

