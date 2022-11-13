/*16. Escriba las siguientes funciones:
A. Tasa de natalidad: cantidad de nacimientos en proporci�n con el total de la poblaci�n, 
recibe estos datos como par�metros y devuelve la tasa.
B. Tasa de mortalidad: porcentaje de fallecimientos en relaci�n al total de la poblaci�n, recibe 
estos datos como par�metros y devuelve la tasa.
C. Poblaci�n en crecimiento: devuelve true, si la tasa de natalidad es mayor a la de mortalidad
D. Densidad Poblacional: habitantes por km 2
Realice un programa que permita ingresar, el nombre de un pa�s, su poblaci�n, su superficie, y 
luego de la opci�n de calcular: Densidad poblacional, Tasa de natalidad, Tasa de Mortalidad y 
Evoluci�n demogr�fica, mientras el usuario lo desee*/

#include "iostream"
#include <string.h>
#include <stdio.h>
using namespace std; 

double tasaNatalidad(int naci, int poblacion){
	return (naci*100)/poblacion;
}
double tasaMortalidad(int muertos, int poblacion){
	return (muertos*100)/poblacion;
}
bool crecimiento(double nac, double muer){
	return nac>muer;
}
double densidad(double habitantes, double km){
	return habitantes/km;
}

int main(){
	string pais;
	bool flag=true;
	double poblacion, superficie;
	int aux, muertos, nacidos;
	cout<<"Ingrese el nombre del pais: ";
	getline(cin, pais);
	cout<<"ingrese la cantidad de poblacion y la superficie:"<<endl;
	cin>>poblacion;
	cin>>superficie;
	cout<<"Ingrese la cantidad de muertos del ultimo a�o: ";
	cin>>muertos;
	cout<<"Ingrese la cantidad de nacidos en el ultimo a�o: ";
	cin>>nacidos;
	
	do{
		cout<<"--------------------------------------------\nElija una opcion:"<<endl;
	cout<<"1.Tasa de natalidad\n2.Tasa de mortalida\n3.Saber si crece\n4.Densidad poblacional\n5.Salir";
	cin>>aux;
	while (aux<1||aux>5){
		cout<<"Ingrese una opcion valida entre 1 y 5"<<endl;
		cin>>aux;
	
	}
		cout<<"------------------------------------------\n"<<endl;
	switch(aux){
		
		case 1: cout<< "La tasa de nacimiento es del "<<tasaNatalidad(nacidos, poblacion)<<"%"<<endl;
		break;
		case 2: cout<<"La tasa de mortalidad es del "<<tasaMortalidad(muertos,poblacion)<<"%"<<endl;
		break;
		case 3: if(tasaNatalidad(nacidos, poblacion)>tasaMortalidad(muertos,poblacion)){
			cout<<"La poblacion esta creciendo"<<endl;
			}else{cout<<"La poblacion esta decrecinendo"<<endl;
			}
			break;
		case 4: cout<<"La densidad de poblacion es de "<< densidad(poblacion, superficie)<<" por metro cuadrado"<<endl;
		break;
		case 5: flag=false;
		}
		
	}while(flag);
	}

