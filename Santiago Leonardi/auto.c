#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "auto.h"
#include "color.h"
#include "fecha.h"
#include "input.h"
#include "marca.h"
#include "servicio.h"
#include "trabajo.h"
#define CANTIDAD 100

int generica_init(eAuto* list, int len)
{
    int estado;
    int i;
    if (list != NULL)
    {
        for (i=0; i<len; i++)
        {
            list[i].isEmpty = 0;
        }

        estado = 0;
    }
    else
    {
        estado = -1;
    }

    return estado;
}
int generica_buscarEspacio (eAuto* list, int len)
{
    int indice = -1;
    int i;

    for (i=0; i<len; i++)
    {
        if (list[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
int generica_add(eAuto* list,int len)
{
    int indice;
    indice = generica_buscarEspacio (list,CANTIDAD);
    int i = atoi(indice);
    if(indice!=-1)
    {
        list[indice].id=indice;
        printf("Ingrese la pantente: ");
        fflush(stdin);
        gets(list[i].patente);
        printf("Ingrese la marca: ");
        fflush(stdin);
        gets(list[i].idMarca);
        printf("Ingrese el color: ");
        fflush(stdin);
        gets(list[indice].idColor);
        printf("Ingrese el modelo: ");
        fflush(stdin);
        scanf("%d",&list[indice].modelo);
    }
    else
    {
        printf("No hay espacio libre");
        system("stop");
    }
    return 0;
}
