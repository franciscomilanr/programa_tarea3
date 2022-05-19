/* 
Autor: Franciscomilan
Realizado: 20/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa en C que conforma la Tarea3, el cual es un programa que calcula
la suma de los 50 primeros números enteros para la materia programacion estructurada    
*/

//Librerias
#include<stdio.h>
#include<math.h>

//Principal
int main() {
	//Variables
	int i, suma=0;
	//Ciclo for
	for(i=1; i<=50; i++) {
		if(i%2==0) {
			suma += i;
		}
	}
	//Salida
	printf(" La suma total de los numeros pares es: %i ",suma);
	//Retorno
	return 0;
}
