#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD 10

typedef struct
   {
       char nombre[20];
       char apellido[20];
       char calle[20];
       int numero;
       int legajo;

   }ePersona;

int main()
{
     ePersona vec[CANTIDAD];


     ///Marcar disponible a todos
     int i;
     for(i=0;i<CANTIDAD;i++)
     {
         vec[i].legajo=-1;
     }

     do
      {
     ///Buscar lugar disponible
     for(i=0;i<CANTIDAD;i++)
     {
         if(vec[i].legajo==-1)
         {
             printf("En el lugar %d esta libre\n",i);
         }
     }
     ///Alta de datos
     printf("\nIngrese el lugar donde quiere cargar: ");
     fflush(stdin);
     scanf("%d",&i);
     printf("\nIngrese el nombre: ");
     fflush(stdin);
     gets(vec[i].nombre);
     printf("Ingrese el apellido: ");
     fflush(stdin);
     gets(vec[i].nombre);
     printf("Ingrese el numero: ");
     fflush(stdin);
     scanf("%d",&vec[i].numero);
     printf("Ingrese el legajo: ");
     fflush(stdin);
     scanf("%d",&vec[i].legajo);
     printf("\n");

     }while(1==1);

     /*
    int i;
    for(i=0;i<CANTIDAD;i++)
    {
    printf("Inngrese un nombre: ");
    gets(vec[i].nombre);
    printf("Inngrese un apellido: ");
    gets(vec[i].apellido);
    printf("Inngrese una calle: ");
    gets(vec[i].calle);
    printf("Inngrese el numero: ");
    scanf("%d",&vec[i].numero);
    fflush(stdin);
    }

    for(i=0;i<CANTIDAD;i++)
    {
        printf("\n%d)El nombre es: %s \t",i,vec[i].nombre);
        printf("El apellido es: %s \t",vec[i].apellido);
        printf("El calle es: %s \t",vec[i].calle);
        printf("El numero es: %d \n",vec[i].numero);
    }
    */
    return 0;
}
