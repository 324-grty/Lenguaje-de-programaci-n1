#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double meta, deposito, ahorro = 0;
	
	cout<<"Ingrese la meta de ahorro: ";
	cin>>meta;
	
	while(ahorro < meta){
		cout<<"Ingrese el monto a depositar: ";
		cin>>deposito;
		
		ahorro += deposito;
		cout<<"Ahorro actual: "<<ahorro<<endl;
	}
	
	cout<<"Meta alzandaza o superada: "<<endl;
	cout<<"Total ahorrado: "<<ahorro<<endl;
	
	return 0;
}

