#include <iostream>
using namespace std;

int main() {
	int N;
	int a = 0, b = 1, siguiente;
	
	cout << "Ingrese un numero limite (N): ";
	cin >> N;
	
	cout << "Serie de Fibonacci:\n";
	
	while (a <= N) {
		cout << a << " ";
		
		siguiente = a + b;
		a = b;
		b = siguiente;
	}
	
	return 0;
}
