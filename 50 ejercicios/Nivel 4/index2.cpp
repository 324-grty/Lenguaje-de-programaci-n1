#include <iostream>
using namespace std;

int main() {
	int pin = 1234, intento, intentos = 0;
	double saldo = 1000;
	bool acceso = false;
	
	// Validación de PIN (máximo 3 intentos)
	while (intentos < 3) {
		cout << "Ingrese su PIN: ";
		cin >> intento;
		
		if (intento == pin) {
			acceso = true;
			break;
		} else {
			cout << "PIN incorrecto.\n";
			intentos++;
		}
	}
	
	if (!acceso) {
		cout << "Tarjeta bloqueada.\n";
		return 0;
	}
	
	// Menú del cajero
	int opcion;
	do {
		cout << "\n--- CAJERO AUTOMATICO ---\n";
		cout << "1. Consultar saldo\n";
		cout << "2. Depositar\n";
		cout << "3. Retirar\n";
		cout << "4. Salir\n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			cout << "Saldo actual: Q" << saldo << endl;
			break;
			
		case 2: {
			double deposito;
			cout << "Ingrese monto a depositar: ";
			cin >> deposito;
			saldo += deposito;
			cout << "Deposito exitoso.\n";
			break;
		}
		
		case 3: {
			double retiro;
			cout << "Ingrese monto a retirar: ";
			cin >> retiro;
			
			if (retiro <= saldo) {
				saldo -= retiro;
				cout << "Retiro exitoso.\n";
			} else {
				cout << "Saldo insuficiente.\n";
			}
			break;
		}
		
		case 4:
			cout << "Gracias por usar el cajero.\n";
			break;
			
		default:
			cout << "Opcion invalida.\n";
		}
		
	} while (opcion != 4);
	
	return 0;
}
