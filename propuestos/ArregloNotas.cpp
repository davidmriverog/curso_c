/* Programa que calcula las notas a traves de arreglos */

// --> Librerias
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// --> Constante o Limite Maximo
#define max 50

// --> Atributos Generales

int opcion,cedula[max],cant_alumnos;
char respuesta='s';
int nota[max];
	
// --> Funcion para capturar los datos por pantalla
void entrada(){
    
	printf("Ingrese la Cantidad de Alumnos a Registrar:");
    scanf("%d",&cant_alumnos);
    
    // --> Validamos que la cantidad de alumnos a ingresar cumpla con el limite...
    if(cant_alumnos>=0 && cant_alumnos<=max){
	  
	  while(respuesta=='s'||respuesta=='S'){
      
      /* Menu Principal */
      system("cls");
      printf("1).- Ingresar Alumnos \n");
      printf("2).- Ver Todos \n");
      printf("3).- Ver Alumnos por Clasificacion de Notas \n");
      printf("4).- Salir \n");
      
      printf("Eliga una Opcion:");
      scanf("%d",&opcion);
    
      switch(opcion){
		
	    case 1:
		   
		   printf("Opcion 1 - Registrar Alumnos \n");
		   
		   for(int i=0;i<cant_alumnos;i++){
		      printf("Ingrese Cedula:");
			  scanf("%d",&cedula[i]);			  
			}
			printf("Desea Seguir (S/N):");
			respuesta=getch();
			
		 break;
	    case 2:
			printf("Opcion 2 - Ver Todos \n");
			
			printf("Cedula \n");
			for(int j=0;j<cant_alumnos;j++){
				
				printf("%d",cedula[j]);
			}
			
			getch();
			break;
		case 3:
			printf("Opcion 3 - Ver Alumnos por Clasificacion de Notas \n");
			break;	
		case 4:
			printf("Fin del Programa.");
			
			respuesta='n';
			
			break;	
			
		default :
			printf("No existe la Opcion!");
			getch();
      } 
	}    	
	}
    
}

// --> Main
int main(){
	
	// Entrada de Datos
	entrada();
}
