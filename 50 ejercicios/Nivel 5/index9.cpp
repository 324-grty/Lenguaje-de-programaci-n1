#include <iostream>
using namespace std;

int main() {
	int limiteMin, min = 0, seg = 0;
	int delay;
	
	cout << "Ingrese el limite en minutos: ";
	cin >> limiteMin;
	
	while (min < limiteMin) {
		// Mostrar tiempo
		cout << min << ":";
		if (seg < 10)
			cout << "0";
		cout << seg << endl;
		
		// Simulación de 1 segundo (ajustable)
		delay = 0;
		while (delay < 100000000) {
			delay++;
		}
		
		seg++;
		
		if (seg == 60) {
			seg = 0;
			min++;
		}
	}
	
	return 0;
}

