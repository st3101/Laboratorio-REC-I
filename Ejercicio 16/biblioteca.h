#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
#include "hora.h"

typedef struct
{
    int legajo;
    eHora arrayHora;
}eAlumno;

int inicializar(eAlumno array[],int limite);

#endif // BIBLIOTECA_H_INCLUDED
