#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscarVocal(char*palabra)
{
    int limite = strlen(palabra);
    int contador=0;
    int i;

    for(i=0;i<limite;i++)
    {
        if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u')
        {
            contador++;
        }
    }
    return contador;
}
