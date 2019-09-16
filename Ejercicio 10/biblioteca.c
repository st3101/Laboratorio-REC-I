#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargarArray(char *pArray[],char* pMensaje,int pLimite)
{
    int i;
    char aux[50];
    for(i=0;i<pLimite;i++)
    {
    printf("%s",pMensaje);
    gets(aux);
    strcpy(&pArray[i],aux);

    }
}
void mostrarArray(char *pArray[],char* pMensaje,int pLimite)
{
     int i;
     for(i=0;i<pLimite;i++)
    {
        printf("\n%d - %s - %s",i,pMensaje,&pArray[i]);
    }
}

int getArrayInt(int *pArray,int limite,char *pMensaje,char *pMensajeError,int minimo,int maximo,int reintentos)
{
	int retorno = -1;
	int buffer;
	int i=0;
	char respuesta;
	//printf("\nDEBUG\n");
	if(pArray != NULL && limite > 0)
	{
		do
		{

			if(	getInt(	&buffer, pMensaje, pMensajeError, minimo, maximo, reintentos) == 0)
			{
				pArray[i] = buffer;
				i++;
				if(i == limite)
				{
					break;
				}
			}

			printf("Continuar (s/n)? : ");
			fflush(stdin); // __fpurge(stdin)
			scanf("%c",&respuesta);
		}while(respuesta != 'n');
		retorno = i;
	}
	return retorno;
}

int getInt(int *pResultado,char *pMensaje,char *pMensajeError,int minimo,int maximo,int reintentos)
{
	int retorno = -1;
	int buffer;
	do
	{
		printf("%s",pMensaje);
		fflush(stdin);
		if(scanf("%d",&buffer)==1 && buffer >= minimo && buffer <= maximo)
		{
			*pResultado = buffer;
			retorno = 0;
			break;
		}
		printf("%s",pMensajeError);
		reintentos--;
	}while(reintentos >= 0);
	return retorno;
}

