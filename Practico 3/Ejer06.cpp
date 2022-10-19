/*Hacer una estructura llamada Corredor, en la cual se tendr�n los siguientes campos: Nombre, edad, sexo, 
club, pedir datos al usuario para un corredor, y asignarle una Categor�a de competici�n (use strcpy para copiar 
a la variable) seg�n sea:
- Juvenil menor o = 18 a�os
- Se�or menor o = 40 a�os
- Veterano mayor a 40 a�os
Posteriormente imprimir todos los datos del corredor, incluida su categor�a de competici�n.*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
typedef struct corredor{
	string nombre;
	int edad;
	string sexo;
	string club;
	char categoria[];
	}corredor;

int main(){
	corredor corredor;
	char cat1[]="Juvenil";
	char cat2[]="Se�or";
	char cat3[]="Veterano";
	char auxi[]="a";
		cout<<"Carga del corredor"<<endl;
		cout<<"Nombre: ";
		getline(cin, corredor.nombre);
		cout<<("Sexo: ");
		getline(cin, corredor.sexo);
		cout<<"Edad: ";
		cin>>corredor.edad;
		getchar();
		cout<<"Club: ";
		getline(cin,corredor.club);
		if (corredor.edad<=18){
		 strcpy( corredor.categoria, cat1);
		} else if(corredor.edad<=40){
		strcpy(corredor.categoria, "Se�or");
		
	}else{strcpy(corredor.categoria, "Veterano");
	};
	cout<<"\n-------------------Datos del corredor------------------"<<endl;
		printf("Nombre: %s. \nSexo: %s.\nEdad: %d. \nClub: %s. \nCategoria: %s\n", 
		corredor.nombre.c_str(),corredor.sexo.c_str(),corredor.edad, corredor.club.c_str(), corredor.categoria);
		cout<<"-----------------------------------------------------------"<<endl;
	
	
	
	return 0;
}
