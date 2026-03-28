#include <iostream>
using namespace std;

int main() {
	int opcion = 0;
	
	while (opcion != 3) {
		cout << "\n--- MENU ---\n";
		cout << "1. Saludar\n";
		cout << "2. Despedirse\n";
		cout << "3. Salir\n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			cout << "Hola! Bienvenido.\n";
			break;
		case 2:
			cout << "Adios! Que tengas un buen dia.\n";
			break;
		case 3:
			cout << "Saliendo del programa...\n";
			break;
		default:
			cout << "Opcion invalida. Intente nuevamente.\n";
		}
	}
	
	return 0;
}

