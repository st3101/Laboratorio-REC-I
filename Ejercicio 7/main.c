#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define QTY_EDADES 5
#define VALOR_INICIAL 0

int main()
{
    int edades[QTY_EDADES];
    //int minimo, maximo, suma ,promedio;
    int resultado;

    ///Inicializar
    initArrayInt(edades,QTY_EDADES,VALOR_INICIAL);
    ///Imprimir
    impriArrayInt(edades,QTY_EDADES);
    ///Cargar
    cargarArrayInt(edades,QTY_EDADES,"Ingrese un valor: ","Error",0,0,0);
    ///Imprimir
    impriArrayInt(edades,QTY_EDADES);
    ///suma
    //sumaArrayInt(edades,QTY_EDADES,)


    return 0;
}
