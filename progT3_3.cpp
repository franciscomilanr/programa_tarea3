/* 
Autor: Franciscomilan
Realizado: 22/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa en C que conforma la tarea , el programa contar el numero 
de enteros negativos introducidos por teclado, terminara de leer numero cuando se 
introdusca un cero para la materia programacion estructurada 
*/

//Librerias
#include<stdio.h>
#include<math.h>

//Principal
int main() {
	//Variables
	float numero=1, cont;
	int negativos=0;
	//While
	while (numero!=0){
	printf("\n Introduce un numero : ");
	scanf("%f",&numero);
	if (numero<0){ 
		negativos++;
		}
	}
	//Salida
        printf("La cantidad de numeros negativos es %d",negativos);
	//Retorno
	return 0;
}