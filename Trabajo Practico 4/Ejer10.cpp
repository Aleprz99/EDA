/*10. Escriba una funci�n nombrada funpot() que eleve un n�mero entero que se le transmita a una 
potencia en n�mero entero positivo y despliegue el resultado. El n�mero entero positivo deber� 
ser el segundo valor transmitido a la funci�n.*/

#include "iostream"
#include "math.h"
using namespace std;
int funpot(int a, int b){
	
	
	return pow(a,b);
}

int main(){
	int a,b;
	cout<<"Ingrese la base de la potencia: ";
	cin>>a;
	cout<<"Ingrese el exponente positivo: ";
	cin>>b;
	while(b<=0){
		cout<<"Debe ingresar un numero mayor a 0: ";
		cin>>b;
	}
	cout<<"El resultado es: "<<funpot(a,b);
	
	return 0;
}
