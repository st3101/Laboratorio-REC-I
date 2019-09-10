#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    char letraMax;
    char continuar;
    int numero;
    int numeroPares=0;
    int numeroImpares=0;
    int numeroCeros=0;
    float numeroPromediosPositivos;
    int numeroNegativosSuma=0;
    int numeroPositivosSuma=0;
    int numeroMax;
    int ipositivos=0;
    int flag=0;


do{
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    fflush(stdin);


    while(numero>100 || numero<-100)
    {
        printf("Error capo ingrese un nuevo numero: ");
        scanf("%d", &numero);
        fflush(stdin);
    }

    printf("ingrese una letra: ");
    scanf("%c", &letra);
    fflush(stdin);

    if(numero==0)
    {
        numeroCeros++;

    }else if(numero>0)
    {
        numeroPositivosSuma= numeroPositivosSuma + numero;
        ipositivos++;
    }
    else
    {
        numeroNegativosSuma+=numero;
    }

    if(0==numero%2 && numero !=1)
    {
      numeroPares++;

    }else
    {
        numeroImpares++;
    }

    if(flag==0||numero>numeroMax)
    {
        numeroMax=numero;
        letraMax = letra;
        flag=1;
    }


    printf("Quiere continuar? s/n: ");
    scanf("%c", &continuar);
    fflush(stdin);


}while(continuar=='s');

numeroPromediosPositivos=(float)numeroPositivosSuma/ ipositivos;

printf("\nLa cantidad de numeros pares es: %d",numeroPares);
printf("\nLa cantidad de numeros impares es: %d",numeroImpares);
printf("\nLa cantidad de numeros ceros es: %d",numeroCeros);
printf("\nEl promedio de numero positivos ingresados %.2f",numeroPromediosPositivos);
printf("\nLa suma de todos los numero negativos es %d",numeroNegativosSuma);
printf("\nEl numero y la letras max es %d%c",numeroMax,letraMax);


printf("\nGracias por usar xvideos.com");
}
