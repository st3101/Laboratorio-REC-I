#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

 void getInt(int*numero,char*pMensaje)
 {
        printf("%s",pMensaje);
        scanf("%d",&*numero);
        fflush(stdin);
 }

void inicializarDisponible(eAlumno array[],int limite)
{
    int i;
    for(i=0;i<limite;i++)
    {
        array[i].estado=-1;
    }
}

void darDeAlta(eAlumno array[],char*pMensaje1,char*pMensaje2,char*pMensajeError,int limite)
{
    int i;
    int flag=0;
    for(i=0;i<limite;i++)
    {
        if(array[i].estado==-1)
        {
            printf("%s",pMensaje1);
            gets(array[i].nombre);
            printf("%s",pMensaje2);
            gets(array[i].apellido);
            array[i].estado=1;
            i=limite;
            flag=1;
        }
     }
     if(flag==0)
     {
         printf("%s",pMensajeError);
          printf("\n");
         system("pause");
     }
}
void darDeBaja(eAlumno array[],char*pMensaje,char*pMensajeError,int limite)
{
         int i;

            printf("%s",pMensaje);
            fflush(stdin);
            scanf("%d",&i);

         while(i>=limite)
         {
             printf("%s",pMensajeError);
             fflush(stdin);
             scanf("%d",&i);
         }






         array[i].estado=-1;
}
void modificar(eAlumno array[],char*pMensaje1,char*pMensaje2,char*pMesanje3,char*pMensaje4,int limite)
{
    int aux;
    int i;

            printf("%s",pMensaje1);
            fflush(stdin);
            scanf("%d",&i);

         while(i>=limite)
         {
             printf("Error ingree un legajo valido: ");
             fflush(stdin);
             scanf("%d",&i);
         }


         while(i>=limite)
         {
             printf("Error, ingrese un legajo valido: ");
             fflush(stdin);
             scanf("%d",&i);
         }

    printf("%s",pMensaje2);
    fflush(stdin);
    scanf("%d",&aux);

         while(i>=2)
         {
             printf("Error. ingrese una opcion valida");
             fflush(stdin);
             scanf("%d",&aux);
         }


   switch(aux)
   {
   case 1:
        printf("%s",pMesanje3);
        fflush(stdin);
        scanf("%d",&aux);
        strcpy(*array[i].nombre,aux);
        break;
   case 2:
        printf("%s",pMensaje4);
        fflush(stdin);
        scanf("%d",&aux);
        strcpy(*array[i].apellido,aux);
        break;
   default:
    printf("Error. Elija una opcion valida.");
    system("pause");
   }




}

