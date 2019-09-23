#include "biblioteca.h"
#include "hora.h"
int inicializar(eAlumno array[],int limite)
{
    int i;
    for(i=0;i<limite;i++)
        {
            array[i].arrayHora.hora=-1;
            printf("%d",array[i].arrayHora.hora);
        }
        return 0;
}
