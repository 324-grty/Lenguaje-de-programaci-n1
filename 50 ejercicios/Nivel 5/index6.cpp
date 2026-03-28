#include <iostream>
using namespace std;

int main() {
	float base, altura, area;
	char opcion = 'S';
	
	while (opcion == 'S' || opcion == 's') {
		cout << "Ingrese la base: ";
		cin >> base;
		
		cout << "Ingrese la altura: ";
		cin >> altura;
		
		area = (base * altura) / 2;
		
		cout << "El area del triangulo es: " << area << endl;
		
		cout << "¿Desea calcular otra area? (S/N): ";
		cin >> opcion;
		cout<<"Gracias por usar mi programa :)";
	}
	
	return 0;
}
