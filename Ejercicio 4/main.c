#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>
#include "biblioteca.h"

int main()
{
   int n1;
   int n2;
   int opcion;
   float resultado;
   char continuar;

  printf("Ingrese primer numero: ");
  scanf("%d",&n1);

  printf("Ingrese segundo numero: ");
  scanf("%d",&n2);
  system("cls");

  do
 {
    printf("\nIngrese una operacion    (A=%d) (B=%d)\n--------------------- \n 1-Suma\n 2-Resta\n 3-Multiplicacion \n 4-Division\n---------------------\nOpcion: ",n1,n2);
    fflush(stdin);
    scanf("%d",&opcion);

  switch(opcion)
  {
      case 1:
          resultado=suma(n1,n2);
          break;
      case 2:
          resultado=resta(n1,n2);
          break;
      case 3:
          resultado=multiplicion(n1,n2);
          break;
      case 4:
          resultado=division(n1,n2);
          break;

  }

  printf("---------------------\nEl resultado es %.2f\n---------------------\n",resultado);

  printf("Desea continuar s/n\n");
  continuar=getche();

  system("cls");

 }while(continuar=='s');


 while(continuar!='s')
 {
     printf("'f' en el chat\n");
     usleep(999999);
 }
 return 0;
}


