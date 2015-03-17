/* Programa que calcula las notas a traves de arreglos */

// --> Librerias
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// --> Constante o Limite Maximo
#define max 50

// --> Atributos Generales

// --> Estructura del Arreglo Alumnos
struct Alumnos
{
   int cedula;	
   char nombres[20];
   float nota;
};

int opcion,cant_alumnos;
char respuesta='s';
	
// --> Funcion para capturar los datos por pantalla
void entrada(){
    
    // --> Preguntamos la cantidad de alumnos a registrar
	printf("Ingrese la Cantidad de Alumnos a Registrar:");
    scanf("%d",&cant_alumnos);
    
    // --> Validamos que la cantidad de alumnos a ingresar cumpla con el limite...
    if(cant_alumnos>0 && cant_alumnos<=max){
	  
	  // --> char notaletra
	  char notaletra[cant_alumnos][1];
	  
	  // --> Instancio el Arreglo Struct Alumnos
	  struct Alumnos alum[cant_alumnos];
	  
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
		   system("cls");
		   printf("Opcion 1 - Registrar Alumnos \n");
		   
		   for(int i=0;i<cant_alumnos;i++){
		   	  // --> Cedula del Alumno
		      printf("Ingrese Cedula:");
			  scanf("%d",&alum[i].cedula);	
			  // --> Nombre del Alumnos
			  printf("Ingrese Nombre:");
			  scanf("%s",&alum[i].nombres);	
			  // --> Nota Parcial
			  printf("Ingrese Nota (0 - 100):");
			  scanf("%f",&alum[i].nota);
			  
			  // --> Condicional para validar la nota segun la letra.
			 if(alum[i].nota>0&&alum[i].nota>=72){
			 	
			 	notaletra[i][1]={'A'};
			 }
			 else if(alum[i].nota>=63&&alum[i].nota<=71){
			 	
			 	notaletra[i][1]={'B'};
			 }
			 else if(alum[i].nota>=48&&alum[i].nota<=62){
			 	
			 	notaletra[i][1]={'C'};
			 }
			 else{
			 	
			 	notaletra[i][1]={'D'};
			 }
			  
			}
			printf("Desea Seguir (S/N):");
			respuesta=getch();
			
		 break;
	    case 2:
	    	system("cls");
			printf("Opcion 2 - Ver Todos \n");
			
			printf("Cedula \t \t Nombres \t \t Nota \t \t Letra \n");
			printf("------------------------------------------------------------------- \n");
			for(int j=0;j<cant_alumnos;j++){
				
				printf("%d \t %s \t %5.2f \t \t %c \n",alum[j].cedula,alum[j].nombres,alum[j].nota,notaletra[j][1]);
				printf("------------------------------------------------------------------- \n");
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
	else{
		printf("Rango no Permitido...");
		
		getch();
	}
    
}

// --> Main
int main(){
	
	// Entrada de Datos
	entrada();
}
