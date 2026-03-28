#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float numero, suma = 0;
	int contador = 0;
	
	cout <<"Ingresa un numero para (-1 terminar): ";
	cin>>numero;
	
	while(numero !=-1){
		suma = suma + numero;
		
		contador++;
		
		cin>>numero;
	}
	
	if (contador > 0){
		cout<<"El promedio es: "<<(suma/contador)<<endl;
	} else {
		cout <<" No se ingresaron numeros validos: "<<endl;
	}
		
	return 0;
}

