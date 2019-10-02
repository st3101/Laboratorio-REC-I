#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#include "carrera.h"
#include "curso.h"
#include "materia.h"
#define CTD_ALUMNO 2

int main()
{
    int opcion;
    int continuar='s';
    eAlumno arrayAlumno[CTD_ALUMNO];
    eCurso arrayCurso[CTD_ALUMNO];
    eMateria arrayMateria[CTD_ALUMNO]={
    {1,"programacion",1},
    {2,"Matematica",2}
    };
    eCarrera arrayCarrera[CTD_ALUMNO]={
    {1,"TSP",1},
    {2,"TSAS",1}
    };
    inicializarDisponible(arrayAlumno,CTD_ALUMNO);


    do
    {
    system("cls");
    getInt(&opcion,"1)Alta\n2)Baja\n3)Modificacion\n4)Ordenar\n5)Mostrar\n6)Listar\n7)Salir\nOPCION: ");
    switch(opcion)
    {
        case 1:
            darDeAlta(arrayAlumno,"Ingrese el nombre: ","Ingrese el apellido: ","No hay lugar disponible.",CTD_ALUMNO,arrayCarrera,arrayCurso,arrayMateria);
            break;
        case 2:
            darDeBaja(arrayAlumno,"Ingrese el legajo de la persona que quiere dar de baja: ","Error, ingrese un legajo valido: ",CTD_ALUMNO,arrayCarrera,arrayCurso,arrayMateria);
            break;
        case 3:
            modificar(arrayAlumno,"\nIngrese el legajo de la persona que quiere modificar: ","1)Modificar el nombre\n2)modificar el apellido\nOPCION: ","Nombre nuevo: ","Apellido nuevo: ",CTD_ALUMNO,arrayCarrera,arrayCurso,arrayMateria);
            break;
        case 4:
             estudiante_ordenarPorString(arrayAlumno,CTD_ALUMNO,arrayCarrera,arrayCurso,arrayMateria);
             break;
        case 5:
            mostrar(arrayAlumno,CTD_ALUMNO,arrayCarrera,arrayCurso,arrayMateria);
            break;
        case 6:
        listar(arrayAlumno,CTD_ALUMNO,arrayCarrera,arrayCurso,arrayMateria);
            break;
        case 7:
            continuar='n';
            printf("Saliste");
            break;
        default:
            printf("Ingrese una opcion valida\n");
            system("pause");
    }
    }while(continuar=='s');
    return 0;
}
