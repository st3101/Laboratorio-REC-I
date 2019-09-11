#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define CANTIDAD 2

int main()
{
    int nota1[CANTIDAD];
    int nota2[CANTIDAD];
    char sexo[CANTIDAD];
    int legajos[CANTIDAD];
    int edades[CANTIDAD];
    int promedios[CANTIDAD];

    getArrayInt(nota1,CANTIDAD,"Ingrese la nota 1: ","Error capo. ",1,10,3);
    getArrayInt(nota2,CANTIDAD,"Ingrese la nota 2: ","Error capo. ",1,10,3);
    printArrayInt(nota1,CANTIDAD);
    printf("\n-------------------------");
    printArrayInt(nota2,CANTIDAD);
    getArrayChar(sexo,CANTIDAD,"Ingrese un sexo");
    //printArrayChar(sexo,CANTIDAD);
    //printf("%c %c",sexo[0],sexo[1]);
    getArrayInt(legajos,CANTIDAD,"Ingrese el legajo","Error capo. ",0,999999,3);
    getArrayInt(edades,CANTIDAD,"Ingrese una edad","Error capo. ",0,100,3);
    promedioArrayInt(nota1,CANTIDAD,promedios);
    promedioArrayInt(nota2,CANTIDAD,promedios);




    return 0;
}
