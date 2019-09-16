#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[20];
    char apellido[20];
    char calle[20];
    int numero;
}eDatosPeronales;

int main()
{
    eDatosPeronales agenda;

    ///hardcodeo
   strcpy(agenda.nombre,"Santiago");
   strcpy(agenda.apellido,"Leonardi");
   strcpy(agenda.calle,"barilari");
   agenda.numero=2134;

    ///Muestro
   printf("HARDCODEO\n");
   printf("%s\n",agenda.nombre);
   printf("%s\n",agenda.apellido);
   printf("%s\n",agenda.calle);
   printf("%d\n",agenda.numero);

   ///cargo
   printf("\nInngrese un nombre: ");
   gets(agenda.nombre);
   fflush(stdin);
   printf("Inngrese un apellido: ");
   gets(agenda.apellido);
   fflush(stdin);
   printf("Inngrese una calle: ");
   gets(agenda.calle);
   fflush(stdin);
   printf("Inngrese el numero: ");
   scanf("%d",&agenda.numero);
   fflush(stdin);

    ///Muestro
   printf("\nCARGADOS\n");
   printf("%s\n",agenda.nombre);
   printf("%s\n",agenda.apellido);
   printf("%s\n",agenda.calle);
   printf("%d\n",agenda.numero);
    return 0;
}
