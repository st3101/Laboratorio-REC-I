#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

int main()
{
    char palabra[20];

    printf("Ingrese una palabra: ");
    gets(palabra);

    printf("la cantidad de vocales es: %d ",buscarVocal(palabra));
}
