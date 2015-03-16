/* Programa que calcula las notas a traves de arreglos */

// --> Librerias
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// --> Constante o Limite Maximo
#define max 3

// --> Atributos Generales
struct{
	char nombres[30];
	float nota_alumno;
	char tipo_nota;
}alumnos[max];
int opcion;
char respuesta='s';
	
// --> Funcion para capturar los datos por pantalla
void entrada(){
    
    while(respuesta=='s'||respuesta=='S'){
    	
	}
	/* Menu Principal */
    printf("1.- Ingresar Alumnos \n");
    printf("2.- Ver Todos \n");
    printf("3.- Ver Alumnos por Clasificacion de Notas");
    printf("3.- Salir \n");
    
    printf("Eliga una Opcion:");
    scanf("%d",&opcion);
    
    switch(opcion){
		
		case 1:
			printf("Opcion 1 - Registrar Alumnos");
			break;
			
		case 3:
			printf("Adios....");
			break;	
	}
}

// --> Main
int main(){
	
	// Entrada de Datos
	entrada();
}
