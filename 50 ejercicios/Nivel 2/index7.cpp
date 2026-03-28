#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char opcion;
	
	cout<<"Desea continuar (S/N): ";
	cin>>opcion;
	
	while (opcion != 'S' && opcion != 'N' && opcion != 's' && opcion != 'n'){
		cout << "Opcion invalida. Intente nuevamente.\n";
		cout<<"Desea conticuar (S/N): ";
		cin>>opcion;
	}
	cout<<"Opcion valida ingresada: "<<opcion<<endl;
	
		
	return 0;
}

