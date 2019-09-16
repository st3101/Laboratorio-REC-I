#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD 5

typedef struct
   {
       char nombre[20];
       char apellido[20];
       char calle[20];
       int numero[20];
   }eDatosPersonales;


int main()
{
    eDatosPersonales vec[CANTIDAD];

    int i;
    for(i=0;i<CANTIDAD;i++)
    {
    printf("Inngrese un nombre: ");
    gets(vec[i].nombre);
    fflush(stdin);
    printf("Inngrese un apellido: ");
    gets(vec[i].apellido);
    fflush(stdin);
    printf("Inngrese una calle: ");
    gets(vec[i].calle);
    fflush(stdin);
    printf("Inngrese el numero: ");
    scanf("%d",vec[i].numero);
    fflush(stdin);
    }
 return 0;
}
