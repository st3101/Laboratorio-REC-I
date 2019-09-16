

void esNumero(char*pResultado,int pLimite)
{
    int i;
    for(i=0;i<pLimite;i++)
    while(*pResultado>'0' || *pResultado<'10')
    {
        printf("Error capo ingrese solo numero: %d\n ",pResultado[i]);

    }
}
