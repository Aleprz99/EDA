/*Ejercicio 3: Escribe un programa que lea de la entrada est�ndar un vector de n�meros de tama�o 100, pero que 
cargue por teclado n n�meros, y los muestre en la salida est�ndar los n�meros del vector con sus �ndices 
asociados.*/

#include <iostream> 
#include <string>
#define  NUMERO 9 
using namespace std;
int main(){
int vector[100]={0};
string aux;
 for(int i=0;i<100;i++){
	cout<<"Ingrese el numero para el indice: "<< i<<endl;
	cin>>vector[i]; 
	cout<<"Quiere ingresar otro numero?";
	cin>>aux;
	if (aux=="no"||aux=="n"){ break;
	}
}
cout <<"-----------------------------------"<<endl;
for(int i=0;i<100;i++){
	if (i!=0 && i%5==0) cout<<endl;
	cout<< "indice "<< i<<": "<<vector[i]<<"\t";
}

return 0;

}

