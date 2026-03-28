#include <iostream>
using namespace std;

int main() {
	float temperatura;
	
	cout << "Ingrese la temperatura: ";
	cin >> temperatura;
	
	while (temperatura <= 50) {
		cout << "Temperatura registrada: " << temperatura << "°C\n";
		cout << "Ingrese la temperatura: ";
		cin >> temperatura;
	}
	
	cout << "¡Temperatura extrema detectada! (" << temperatura << "°C)\n";
	
	return 0;
}
