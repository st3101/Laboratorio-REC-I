#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define CTD_ALUMNO 2

int main()
{
    int opcion;
    int continuar='s';
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
            darDeBaja(arrayAlumno,"Ingrese el legajo de la persona que quiere dar de baja: ","Error, ingrese un legajo valido: ",CTD_ALUMNO);
            break;
        case 3:
            modificar(arrayAlumno,"Ingrese el legajo de la persona que quiere modificar: ","1)Modificar el nombre\n2)modificar el apellido","Nombre nuevo: ","Apellido nuevo: ",CTD_ALUMNO);
            break;
        case 4:
             estudiante_ordenarPorString(arrayAlumno,CTD_ALUMNO);
             break;
        case 5:
            mostrar(arrayAlumno,CTD_ALUMNO);
            break;
        case 6:
            continuar='n';
            printf("Saliste");
            break;
        default:
            printf("Ingrese una opcion valida\n");
            system("pause");
    }
    }while(continuar=='s');
}
