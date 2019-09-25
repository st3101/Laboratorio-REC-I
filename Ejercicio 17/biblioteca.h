#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
typedef struct
{
    int legajo;
    char nombre[50];
    char apellido[50];
    int estado;

}eAlumno;

void getInt(int*numero,char*pMensaje);
void inicializarDisponible(eAlumno array[],int limite);
void darDeAlta(eAlumno array[],char*pMensaje1,char*pMensaje2,char*eMensajeError,int limite);
void darDeBaja(eAlumno array[],char*pMensaje);
void modificar(eAlumno array[],char*pMensaje1,char*pMensaje2);

#endif // BIBLIOTECA_H_INCLUDED
