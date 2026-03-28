#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int nota;
	
	cout<<"Ingrese su nota (0 - 10): ";
	cin>>nota;
	
	while (nota < 0 || nota > 10){
		cout<<"Nota invalida.\n";
		cout<<"Ingrese nuevamente su nota (0 - 10): ";
		cin>>nota;
	}
	cout<<"Nota valida tienes: "<<nota<<" de nota"<<endl;
	return 0;
}

