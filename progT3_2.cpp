/* 
Autor: Franciscomilan
Realizado: 21/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa en C que conforma la tarea 3, el cual calcula la media de las notas 
introducidas por teclado con un dialogo para la materia programacion estructurada
*/

//Librerias
#include<stdio.h>
#include<math.h>

//Principal
int main() {
	//Variables
	int i;
	float cant, media, calif, suma;
	//Entrada de datos
	printf("\n ¿Cuantas notas? ");
	scanf("%f",&cant);
	//For for
	for (i=1; i<=cant; i++) {
		printf("\n Nota %d: ",i);
		scanf("%f",&calif);
      		suma=suma+calif;
		media=suma/i;		
		}
	//Salida
	printf("\n Media de estas %.0f notas: %.1f ", cant, media);
	//Retorno
	return 0;
}
