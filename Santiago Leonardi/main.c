#include <stdio.h>
#include <stdlib.h>
#include "auto.h"
#include "color.h"
#include "fecha.h"
#include "input.h"
#include "marca.h"
#include "servicio.h"
#include "trabajo.h"
#define CANTIDAD 100
int main()
{
    int comprobarInicializacion;

    eTrabajo arrayTrabajo[CANTIDAD];
    eAuto arrayAuto[CANTIDAD];
    eFecha arrayFecha[CANTIDAD];
    eServicio arrayServicio[4]={{20000,"Lavado",250},{20001,"Pulido",300},{20002,"Encerado",400},{20003,"Completo",600}};
    eColor arrayColor[5]={{5000,"Negro"},{5001,"Blanco"},{5002,"Gris"},{5003,"Rojo"},{5004,"Azul"}};
    eMarca arrayMarca[5]={{1000,"Reault"},{1001,"Fiat"},{1002,"Fort"},{1003,"Chevrolet"},{1004,"Peugeot"}};


    comprobarInicializacion = generica_init(arrayAuto, CANTIDAD);

    if (comprobarInicializacion == 0)
    {
        printf("::::::::::::::::::::::::::::::::::::::::\n");
        printf("Todos los estados se han inicializado.");
        printf("\n::::::::::::::::::::::::::::::::::::::::\n\n\n");
    }
    else
    {
        printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("Ha ocurrido un error al inicializar estados.\n\n\n");
        printf(":::::::::::::::::::::::::::::::::::::::::::::\n\n\n");
    }
    system("pause");
    system("cls");


    char opcion;

    do
    {
        printf("::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("SOLO SE TOMARA EL PRIMER DIGITO COMO OPCION.\n");
        printf("::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("(1) ALTA AUTO \n");
        printf("(2) \n");
        printf("(3) \n");
        printf("(4) \n");
        printf("(5) \n");
        printf("(6) \n");
        printf("(7) Salir\n");

        printf("Debe elegir una opcion a realizar: ");
        fflush(stdin);
        scanf("%c", &opcion);

        while (opcion!='1' && opcion!='2' && opcion!='3' && opcion!='4' && opcion!='5' && opcion!='6' && opcion!='7')
        {
            printf("Error. Ha ingresado una opcion erronea!\n\n");
            printf("Debe elegir una opcion a realizar: ");
            fflush(stdin);
            scanf("%c", &opcion);
        }

        switch (opcion)
        {
        case '1':
             generica_add(arrayAuto, CANTIDAD);

            break;

        case '2':

            break;

        case '3':
            break;

        case '4':
            break;

        case '5':
            break;

        case '6':
            break;

        case '7':
            break;

        default:
            printf("Error. Ha ingresado una opcion erronea!\n\n");
        }

        system("pause");
        system("cls");
    }
    while (opcion!='7');

    return 0;
}


