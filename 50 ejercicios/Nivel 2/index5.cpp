#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	
	cout<<"Ingrese un numero par: ";
	cin>>numero;
	
	while(numero % 2 != 0 ){
		cout<<"El numero es impar.\n";
		cout<<"Ingrese nuevamente el numero par: ";
		cin>>numero;
	}
	cout<<"El numero es par: "<<numero<<endl;
	return 0;
}

