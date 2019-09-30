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
            array[i].legajo=i;
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
        gets(array[i].nombre);
        break;
   case 2:
        printf("%s",pMensaje4);
        fflush(stdin);
        gets(array[i].apellido);
        break;
   default:
    printf("Error. Elija una opcion valida.");
    system("pause");
   }




}
void estudiante_ordenarPorString(eAlumno array[],int limite)                              //cambiar estudiante
{
    int i, j;
    char bufferString[50];                               //cambiar campo varString
    int bufferId;
    int bufferIsEmpty;
                                                  //cambiar buffer int

    //float bufferFloat;                                          //cambiar buffer varFloat
    //char bufferLongString[TEXT_SIZE];                           //cambiar campo varLongString

    if(array!=NULL && limite>=0)
    {
        for (i = 1; i < limite; i++)
        {
            strcpy(bufferString,array[i].nombre);                      //cambiar campo varString
            bufferId=array[i].legajo;                                   //cambiar campo id
            bufferIsEmpty=array[i].estado;


            //bufferFloat=array[i].varFloat;                            //cambiar campo varFloat
            //strcpy(bufferLongString,array[i].varLongString);          //cambiar campo varLongString


            j = i - 1;
            while ((j >= 0) && strcmp(bufferString,array[j].nombre)<0)         //cambiar campo varString                 //Si tiene mas de un criterio se lo agrego, Ej. bufferInt<array[j].varInt
            {                                                                                                               //buffer < campo ascendente   buffer > campo descendente
                strcpy(array[j + 1].nombre,array[j].nombre);          //cambiar campo varString
                array[j + 1].legajo=array[j].legajo;                                //cambiar campo id
                array[j + 1].estado=array[j].estado;
                                      //cambiar campo varInt
                                //cambiar campo varInt
                //array[j + 1].varFloat=array[j].varFloat;                    //cambiar campo varFloat
                //strcpy(array[j + 1].varLongString,array[j].varLongString);  //cambiar campo varLongString

                j--;
            }
            strcpy(array[j + 1].nombre,bufferString);                     //cambiar campo varString
            array[j + 1].legajo=bufferId;                                        //cambiar campo id
            array[j + 1].estado=bufferIsEmpty;
                                                                 //cambiar campo varInt
                                                             //cambiar campo varInt
            //array[j + 1].varFloat=bufferFloat;                                                    //cambiar campo varFloat
            //strcpy(array[j + 1].varLongString,bufferLongString);                                  //cambiar campo varLongString
        }

    }

}
void mostrar(eAlumno array[],int limite)
{
    int i;

           for(i=0;i<limite;i++)
        {
                if(array[i].estado==1)
            {
                printf("\n%s\n%s\n%d\n",array[i].nombre,array[i].apellido,array[i].legajo);

            }
        }

    system("pause");
}
