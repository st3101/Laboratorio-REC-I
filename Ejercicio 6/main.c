#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultados[6];
    int auxi;
    int i;

    for(i=1;i<6;i++)
    {
        printf("Ingrese numero %d: ",i);
        scanf("%d",&auxi);
        resultados[i]=auxi;
    }

    printf("\n");

    for(i=1;i<6;i++)
    {
        printf("El numero %d es: %d \n",i,resultados[i]);
    }

}
