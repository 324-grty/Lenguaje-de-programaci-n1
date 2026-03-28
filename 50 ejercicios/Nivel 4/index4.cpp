#include <iostream>
using namespace std;

int main() {
	int contador = 10;
	char opcion;
	
	while (contador >= 0) {
		cout << "T - " << contador << endl;
		cout << "Presione E + ENTER para emergencia o cualquier otra tecla para continuar: ";
		cin >> opcion;
		
		if (opcion == 'E' || opcion == 'e') {
			cout << "\n*** EMERGENCIA DETECTADA ***\n";
			cout << "Despegue cancelado.\n";
			return 0;
		}
		
		contador--;
	}
	
	cout << "\n¡Despegue exitoso!\n";
	
	return 0;
}

