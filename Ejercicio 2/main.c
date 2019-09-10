#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero1;
int numero2;
int numero3;
int numero4;
int numero5;
int suma=0;
float promedio=0;

printf("ingrese el primer numero:");
scanf("%d", &numero1);

printf("\ningrese el segundo numero:");
scanf("%d", &numero2);

printf("\ningrese el tersero numero:");
scanf("%d", &numero3);

printf("\ningrese el cuarto numero:");
scanf("%d", &numero4);

printf("\ningrese el quinto numero:");
scanf("%d", &numero5);

suma=numero1 + numero2 + numero3 + numero4 + numero5;
promedio=(float)suma/5;

printf("La suma es %d\n",suma);
printf("El promedio es %.2f",promedio);
}
