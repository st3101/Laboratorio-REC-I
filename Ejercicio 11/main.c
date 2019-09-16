#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int resp;
   char cResp[10];
   int cant;
   int i;


   printf("Ingrese un numero: ");
   fgets(cResp,sizeof(cResp),stdin);

   cant=strlen(cResp);
   printf("\nLongitud strlen %d\n",cant);

   for(i=0;i<cant;i++)
   {
       printf("\nElementos: %d %c",i,cResp[i]);
   }

   cResp[strlen(cResp)-1]='\0';
   cant=strlen(cResp);
    for(i=0;i<cant;i++)
   {
       printf("\nElementos: %d %c",i,cResp[i]);
   }5

  esNumero(cResp,cant);
   return 0;
}
