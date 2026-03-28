#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string contra;
	
	cout<<"Ingrese la contraseña: ";
	cin>>contra;
	
	while(contra != "1234"){
		cout<<"Contraseña incorrecta.\n";
		cout<<"Ingrese nuevamente la contraseña: ";
		cin>>contra;
	}
	cout<<"Contraseña correcta: "<<contra<<endl;
	return 0;
}

