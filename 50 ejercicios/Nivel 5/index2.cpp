#include <iostream>
using namespace std;

int main() {
	int N, i = 0, j;
	
	cout << "Ingrese el tamaño del cuadrado: ";
	cin >> N;
	
	while (i < N) {
		j = 0;
		while (j < N) {
			// Bordes: primera fila, última fila, primera columna, última columna
			if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
				cout << "* ";
			} else {
				cout << "  ";
			}
			j++;
		}
		cout << endl;
		i++;
	}
	
	return 0;
}
