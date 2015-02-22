/* Programa que calcula la edad */
#include <stdio.h>
#include <conio.h>
int main()
{
    int AN,AA,ED;
    char nombre[20];
    printf("dime tu nombre:");
    scanf("%s",nombre);
    printf("Ingrese el año de nacimientto:");
    scanf("%d",&AN);
    printf("Ingrese el anno actual:");
    scanf("%d",&AA);
    ED=AA-AN;
    printf("Tu edad es: %d",ED);
    getch();
}
