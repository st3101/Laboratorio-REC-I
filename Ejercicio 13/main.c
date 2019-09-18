#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD 2

typedef struct
{
    char calle[20];
    int numero;
}eDireccion;

typedef struct
   {
       char nombre[20];
       char apellido[20];
       eDireccion domicilio;
   }eDatosPersonales;


int main()
{
    eDatosPersonales vec[CANTIDAD];

    int i;
    for(i=0;i<CANTIDAD;i++)
    {
    printf("Ingrese un nombre: ");
    gets(vec[i].nombre);
    printf("Ingrese un apellido: ");
    gets(vec[i].apellido);
    printf("Ingrese una calle: ");
    gets(vec[i].domicilio.calle);
    printf("Ingrese el numero: \n");
    scanf("%d",&vec[i].domicilio.numero);
    fflush(stdin);
    }

for(i=0;i<CANTIDAD;i++)
    {
        printf("\n%d)El nombre es: %s \t",i,vec[i].nombre);
        printf("El apellido es: %s \t",vec[i].apellido);
        printf("El calle es: %s \t",vec[i].domicilio.calle);
        printf("El numero es: %d \n",vec[i].domicilio.numero);
    }

 return 0;
}
