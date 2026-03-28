#include <iostream>
using namespace std;

int main() {
	double num1, num2, resultado;
	char operador, opcion = 'S';
	
	while (opcion == 'S' || opcion == 's') {
		cout << "Ingrese el primer numero: ";
		cin >> num1;
		
		cout << "Ingrese el operador (+, -, *, /): ";
		cin >> operador;
		
		cout << "Ingrese el segundo numero: ";
		cin >> num2;
		
		switch (operador) {
		case '+':
			resultado = num1 + num2;
			cout << "Resultado: " << resultado << endl;
			break;
			
		case '-':
			resultado = num1 - num2;
			cout << "Resultado: " << resultado << endl;
			break;
			
		case '*':
			resultado = num1 * num2;
			cout << "Resultado: " << resultado << endl;
			break;
			
		case '/':
			if (num2 != 0) {
				resultado = num1 / num2;
				cout << "Resultado: " << resultado << endl;
			} else {
				cout << "Error: division por cero.\n";
			}
			break;
			
		default:
			cout << "Operador invalido.\n";
		}
		
		cout << "¿Desea realizar otra operacion? (S/N): ";
		cin >> opcion;
	}
	
	cout << "Programa finalizado." << endl;
	
	return 0;
}
