/*Haga un programa en C++ que devuelva la parte fraccionaria de cualquier n�mero introducido
por el usuario. Ejemplo, si introduc�s el n�mero 256.879, deber�a desplegarse el n�mero 0.879.*/

#include "stdio.h"
#include "iostream"
#include "string.h"
#include "stdlib.h"
#include <math.h>

using namespace std;

double decimal(float a){
double PE,PD;
PD=modf(a,&PE);

return PD;	

}

int main(){
double num;
cout<<"dame un numero: "<<endl;
cin>>num;
cout<<"la parte decimal de "<< num << " es "<<decimal(num)<<endl;
return 0;
}
