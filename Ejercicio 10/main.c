#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define QTD_CLIENTES 2
#define MSG_NOMBRE "Ingrese un nombre: "
#define MSG_APELLIDO "Ingrese un apellido: "
#define MSG_R_NOMBRE "El nombre es: "
#define MSG_R_APELLIDO "El apellido es: "

int main()
{
   char arrayNombre[QTD_CLIENTES][50];
   char arrayApellido[QTD_CLIENTES][50];


   ///Cargar array
    cargarArray(arrayNombre,MSG_NOMBRE,QTD_CLIENTES);
    cargarArray(arrayApellido,MSG_APELLIDO,QTD_CLIENTES);





    //mostrarArray(arrayNombre,MSG_R_NOMBRE,QTD_CLIENTES);
    //mostrarArray(arrayApellido,MSG_R_APELLIDO,QTD_CLIENTES);


}
