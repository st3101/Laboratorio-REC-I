#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

void mostrarArray(char pArray[][50],char*pMensaje,int pLimite);
void cargarArray(char pArray[][50],char*pMensaje,int pLimite);
int getArrayInt(int *pArray,int limite,char *pMensaje,char *pMensajeError,int minimo,int maximo,int reintentos);
int getInt(int *pResultado,char *pMensaje,char *pMensajeError,int minimo,int maximo,int reintentos);
#endif // BIBLIOTECA_H_INCLUDED
