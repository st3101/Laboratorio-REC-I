float suma(float n1,float n2)
{
    float resultado=n1+n2;
    return resultado;
}
float resta(float n1,float n2)
{
    float resultado=n1-n2;
    return resultado;
}
float division(float n1,float n2)
{
    float resultado=n1/n2;
    return resultado;
}
float multiplicacion(float n1, float n2)
{
    float resultado=n1*n2;
    return resultado;
}
float factorialN2(float n1)
{
    int i;
    long int resultado;

    resultado=1;

    for(i=1;i<=n1;i++)
    {
        resultado=resultado*i;
    }
    return resultado;
}


float factorialN1(float n2)
{
    int i;
    long int resultado;

    resultado=1;

    for(i=1;i<=n2;i++)
    {
        resultado=resultado*i;
    }
    return resultado;
}

int initArrayInt(int *pArray[], int limite , int valor)
{
    int retorno=1;
    int i;
    if(limite > 0)
    {
        for (i=0;i<limite;i++)
        {
            pArray[i]=valor;
        }
         retorno = 0;
    }
    return retorno;
}

int impriArrayInt(int *pArray[],int limite)
{
    int retorno=1;
    int i;
    if(limite > 0)
    {
      for(i=0;i<limite;i++)
      {
        printf("\t%i\n",pArray[i]);
      }
        retorno = 0;
    }
    return retorno;
}
int cargarArrayInt(int *pArray, int limite,char *pMensaje,char *pMensajeError,int minimo,int maximo,int reitentos)
{
    int retorno=-1;
    int buffer;
    int i=0;
    char respuesta;
    int continuar=0;

    if (limite>0)
    {
            for(i=0;i<limite;i++)
            {
                printf("%s",pMensaje);
                scanf("%d",&pArray[i]);
            }
    }
}

int sumaArrayInt(int* pArray,int limite, int* resultado)
{
    int res=0;
    int i;

        for(i=0; i<limite;i++)
        {
            res=res+pArray[i];
        }
         *resultado = res;
         return 0;
}


