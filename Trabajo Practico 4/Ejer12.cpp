/*12. Escriba una funci�n llamada maximo() que devuelva el valor m�ximo de tres argumentos que se 
transmitan a la funci�n cuando sea llamada. Suponga que los tres argumentos ser�n del mismo
tipo de datos.
*/
#include "iostream"
int maximo(int a,int b,int c){
	
	if (a>=b&&a>=c){
		return a;
	}else if (b>=a&&b>=c){
		return b;
		
	}else{
		return c;
	}
}
using namespace std;
int main(){
	int a,b,c;
	cout<<"Ingrese los tres numeros"<<endl;
	cin>>a>>b>>c;
	cout<<"El mayor valor ingresado fue "<<maximo(a,b,c);
	
	return 0;
}
