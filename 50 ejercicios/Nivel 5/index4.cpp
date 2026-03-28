#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char c;
	int contador = 0;
	
	cout << "Ingrese caracteres (termina con *): ";
	
	c = cin.get(); // lee el primer carácter (incluye espacios)
	while (c != '*') {
		// verificar si es vocal (mayúscula o minúscula)
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			contador++;
		}
		
		c = cin.get(); // leer siguiente carácter
	}
	
	cout << "Cantidad de vocales: " << contador << endl;
	
	return 0;
}

