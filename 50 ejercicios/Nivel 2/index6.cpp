#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int mes;
	
	cout<<"Ingrese el numero del mes (1 - 12): ";
	cin>>mes;
	
	while(mes <1 || mes> 12){
		cout<<"Mes invalido. Intente nuvamente.\n";
		cout<<"Ingrese el numero del mes (1 - 12): ";
		cin>>mes;
	}
	cout<<"Mes valido: "<<mes<<endl;
	return 0;
}

