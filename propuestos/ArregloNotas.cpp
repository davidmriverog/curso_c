/* Programa que calcula las notas a traves de arreglos */

// --> Librerias
#include <conio.h>
#include <stdio.h>


// --> Constante o Limite Maximo
#define max 3

// --> Atributos Generales
	int notas[max];
	char nombres[50];
	char tipo_calificacion[max];

// --> Funcion para capturar los datos por pantalla
void entrada(){
    
    for(int i=0;i<=max;i++){
    	
    	printf("Ingrese Nombres del Alumno:");
    	scanf("%s",&nombres[50]);
    	printf("Ingrese Nota Final (del 0 - 100):");
    	scanf("%d",&notas[i]);
	}
}
// --> Main
int main(){
	
	// Entrada de Datos
	entrada();
	
}
