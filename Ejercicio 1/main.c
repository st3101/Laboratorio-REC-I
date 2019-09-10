#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=1998;
    printf("Mundial del anio '%d'\n\n",numero);

    char letra='a';
    printf("La letras es: '%c'\n\n",letra);

    char nombre[21]="Peron";
    printf("El imperio de '%s' contrataca\n\n",nombre);

    float hora=04.20;
    printf("La hora de fumarse uno es '%.2f'\n\n",hora);

    int numeroPedido;
    printf("hola capo, pone un numero: ");
    scanf("%d", &numeroPedido);
    printf("Su numero es '%d'\n\n\n",numeroPedido);

    char nombreIngresado[20];
    printf("ingrese su nombre: ");
    gets("%s", nombreIngresado);

    int edad;
    printf("\ningrese su edad: ");
    scanf("%d",&edad);

    printf("\nSu nombre es: %s \nSu edad es: %d\n",nombreIngresado,edad);
    return 0;

}
