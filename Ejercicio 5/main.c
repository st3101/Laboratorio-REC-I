#include <stdio.h>
#include <stdlib.h>
int funcion();

int main()
{
    int numero1;
    int numero2;

    funcion(&numero1,&numero2);
    printf("\nEl primer numero es: %d\n", numero1);
    printf("El segund numero es: %d\n", numero2);
    return 0;
}

int funcion(int*numero1, int*numero2)
{
    int num1;
    int num2;
    printf("\nIngrese un primer numero: ");
    fflush(stdin);
    scanf("%d",&num1);
    printf("Ingrese un segundo numero: ");
    fflush(stdin);
    scanf("%d",&num2);
    *numero1=num1;
    *numero2=num2;
    return 0;
}
