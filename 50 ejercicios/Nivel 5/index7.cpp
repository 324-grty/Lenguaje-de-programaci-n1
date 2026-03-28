#include <iostream>
using namespace std;

int main() {
	int A, B;
	
	cout << "Ingrese el valor de A: ";
	cin >> A;
	
	cout << "Ingrese el valor de B: ";
	cin >> B;
	
	if (A <= B) {
		while (A <= B) {
			cout << A << " ";
			A++;
		}
	} else {
		while (A >= B) {
			cout << A << " ";
			A--;
		}
	}
	
	return 0;
}
