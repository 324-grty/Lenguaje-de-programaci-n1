#include <iostream>
using namespace std;

int main() {
	system("Color C9");
	int N, i = 1, suma = 0;
	
	cout << "Ingrese el valor de N: ";
	cin >> N;
	
	while (i <= N) {
		suma = suma + i;
		i++;
	}
	
	cout << "La suma de los primeros " << N << " numeros es: " << suma << endl;
	
	return 0;
}
