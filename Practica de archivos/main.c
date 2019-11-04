#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   ///Agrega datos (Binario)
    printf("Se agregan datos a - data.bin -\n");
    char mensaje[20]="Hola de nuevo ";
    FILE* f = fopen("data.bin", "ab");
    fwrite(mensaje, sizeof(char), strlen(mensaje), f);
    system("pause");
    system("cls");

    ///sobre escribe datos (Texto)
    printf("Se agregan datos a - dataT.bin -");
    char mensaje2[20]="Holiwis ";
    FILE* h = fopen("dataT.bin","w");
    fwrite(mensaje2, sizeof(char), strlen(mensaje2), h);

    return 0;

}
