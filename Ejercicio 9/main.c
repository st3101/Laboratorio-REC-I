#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"
#define QTD_CLIENTES 2
#define MSG_INGRESENOM "Ingrese un nombre"

int main()
{
    int i;
    char arrayNombre[QTD_CLIENTES][50];
    char arrayApellido[QTD_CLIENTES][50];
    char auxNombre[50];
    char auxApellido[50];
    return 0;


    //cargarChar
    getString(char MSG_INGRESENOM,char auxNombre);
    strcpy(arrayNombre,auxNombre);

}
