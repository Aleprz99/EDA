/*Escriba una funci�n llamada maximo() que devuelva el valor m�ximo de tres argumentos que se
transmitan a la funci�n cuando sea llamada. Suponga que los tres argumentos ser�n del mismo
tipo de datos.*/

#include "stdio.h"
#include "iostream"
#include "string.h"
#include "stdlib.h"

using namespace std;

int maximo(int a, int b, int c){
	int max=0;
	if(a>b && a>c){
		return a;
	}
	if(b>a && b>c){
		return b;
	}
	if(c>b && c>a){
		return c;
	}

}

int main(){
	int num1, num2,num3;
	cout<<"ingrese tres numeros"<<endl;
	cin>>num1>>num2>>num3;

	cout<<"el numero mas grande es: " << maximo(num1,num2,num3)<<endl;
return 0;
}
