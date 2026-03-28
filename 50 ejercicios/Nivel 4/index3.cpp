#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int dado = 0;
	
	// Inicializar la semilla aleatoria
	srand(time(0));
	
	while (dado != 6) {
		dado = rand() % 6 + 1; // genera número entre 1 y 6
		cout << "Salio: " << dado << endl;
	}
	
	cout << "¡Salio el 6! Fin del juego." << endl;
	
	return 0;
}
