#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   FILE* f =fopen("archivo.txt","w");
   char mensaje[30]={"Hola guapo"};

   char cadena[30];

   if(f == NULL)
   {
        printf("No se puedo abrir el archivo\n");
        system("pause");
        exit(EXIT_FAILURE);
   }
    fwrite(mensaje,sizeof(char),strlen(mensaje),f);

  // fprintf(f,"Hola mundo");

   fclose(f);

   return 0;
}
