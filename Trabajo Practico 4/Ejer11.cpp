/*11. Haga un programa en C++ que devuelva la parte fraccionaria de cualquier n�mero introducido 
por el usuario. Ejemplo, si introduc�s el n�mero 256.879, deber�a desplegarse el n�mero 0.879.*/
#include "iostream"
using namespace std;

float fraccionaria(float a){
	int b=a;
	float total= a-b;
	return total;
}
int main(){
	float a;
	cout<<"Ingrese un numero con decimales: ";
	cin>>a;
	cout<<"La parte decimal del numero es: "<<fraccionaria(a);
	
	return 0;
}
