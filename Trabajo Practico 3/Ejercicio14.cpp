/*14. Opcional. En un comercio trabajan 20 vendedores, distribuidos en 4 secciones (bazar, accesorios, 
indumentaria, calzados). Se pide que se almacene la informaci�n de sus empleados.
� Defina la estructura principal empleado se dese saber: nombre, legajo, sector, ventas diarias de cada d�a 
de la semana, ventas totales de esa semana (calculable). 
El comercio, tiene una pol�tica de premios semanales por ventas; para esto, al fin de cada semana determina 
cuales son los vendedores con mayores ventas por sector, y se guarda en Premiados.
� Defina la estructura secundaria Premiados para almacenar por cada sector, legajo del empleado de mayor 
venta semanal y total vendido.
Realice un programa que permita:
a. Cargar los datos de los empleados
b. Calcular el total de ventas semanales por vendedor.
c. Determinar por cada sector, el vendedor con mayores ventas, esta informaci�n debe ser almacenada en la 
segunda estructura.
d. Mostrar los nombres de los empleados premiados en una semana.
e. Listar todos los empleados y el total vendido.*/
#include "iostream"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct empleado{
	char nombre[20];
	int legajo;
	char sector[20];
	int ventasdiarias[7];
	int ventastotales; 
};
struct premiados{
	int bazar[2];
	int accesorios[2];
	int indumentaria[2];
	int calzados[2];
};
int main(){
	
	return 0;
}
