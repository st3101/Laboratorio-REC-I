#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
#include "biblioteca.h"
#include "carrera.h"
#include "curso.h"
#include "materia.h"

typedef struct
{
    int legajo;
    char nombre[50];
    char apellido[50];
    int estado;

}eAlumno;

void getInt(int*numero,char*pMensaje);
void inicializarDisponible(eAlumno array[],int limite);
void darDeAlta(eAlumno array[],char*pMensaje1,char*pMensaje2,char*eMensajeError,int limite,eCarrera arrayCarrera[],eCurso arrayCurso[],eMateria arrayMateria[]);
void darDeBaja(eAlumno array[],char*pMensaje,char*pMensajeError,int limite,eCarrera arrayCarrera[],eCurso arrayCurso[],eMateria arrayMateria[]);
void modificar(eAlumno array[],char*pMensaje1,char*pMensaje2,char*pMesanje3,char*pMensaje4,int limite,eCarrera arrayCarrera[],eCurso arrayCurso[],eMateria arrayMateria[]);
void estudiante_ordenarPorString(eAlumno array[],int limite,eCarrera arrayCarrera[],eCurso arrayCurso[],eMateria arrayMateria[]);
void mostrar(eAlumno array[],int limite,eCarrera arrayCarrera[],eCurso arrayCurso[],eMateria arrayMateria[]);
void listar(eAlumno array[],int limite,eCarrera arrayCarrera[],eCurso arrayCurso[],eMateria arrayMateria[]);
#endif // BIBLIOTECA_H_INCLUDED
