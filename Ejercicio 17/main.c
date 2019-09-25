#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define CTD_ALUMNO 2

int main()
{
    int opcion;
    eAlumno arrayAlumno[CTD_ALUMNO];
    inicializarDisponible(arrayAlumno,CTD_ALUMNO);


    do
    {
    system("cls");
    getInt(&opcion,"1)Alta\n2)Baja\n3)Modificacion\n4)Ordenar\n5)Mostrar\n6)Salir\n\nOPCION: ");
    switch(opcion)
    {
        case 1:
            darDeAlta(arrayAlumno,"Ingrese el nombre: ","Ingrese el apello: ","No hay lugar disponible.",CTD_ALUMNO);
            break;
        case 2:
            darDeBaja(arrayAlumno,"Ingrese el legajo de la persona que quiere dar de baja: ");
            break;
        case 3:
            modificar(arrayAlumno,"Ingrese el legajo de la persona que quiere modificar: ","1)Modificar el nombre\n2)modificar el apellido"); //quedaste aca

    }
    }while(1==1);
}
