#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int estudiante_Inicializar(eEstudiante array[], int size)                                    //cambiar estudiante
{
    int retorno=-1;
    int i;
    if(array!= NULL && size>0)
    {
        for(i=0;i<size;i++)
        {
            array[i].legajo=1;
            printf("%d",array[i].legajo);
        }
        retorno=0;
    }
    return retorno;
}

