#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int id;
    char nombre[20];
    float sueldo;
}eEmpleado;

int main()
{
    int tam = 0;
    eEmpleado * auxEmpleado = NULL;
    eEmpleado ** lista = (eEmpleado**) malloc(sizeof(eEmpleado*));
    if(lista == NULL)
        printf("No se puedo asignar memoria/\n");
        system("pause");
        exit(EXIT_FAILURE);
    return 0;
    auxEmpleado = newEmpleado()
    if(auxEmpleado == NULL)
}

eEmpleado* newEmpleado(){
eEmpleado* nuevo = (eEmpleado*) malloc(sizeof(eEmpleado));

if(nuevo != NULL){
    nuevo -> id =0;
    strcpy(nuevo->nombre," ");
    nuevo->sueldo =0;
}

return nuevo;
}

eEmpleado* newEmpleadoParam(int id, char* nombre, float sueldo){

}

int setNombreEmpleado(eEmpleado* e,char* nombre){

int todoOk = 0;
0if(e != NULL && nombre != NULL && strlen(nombre<20)){
    strcpy(e->nombre,nombre);
    todoOk = 1;
}
    return todoOk;
}

int getIdEmpleado(eEmpleado* e,int* id){
    int todoOk = 1;

    if(e != NULL && id != NULL){
        *id = e -> id;
        todoOk = 0;
    }
    return todoOk;
}
 int mostrarEmpleado(eEmpleado* e){
 int todoOK = 0;
    if(e != NULL)
    {
        printf("%d %s %.2f\n",e->id,e->nombre,e->sueldo))
        todoOK = 1;
    }
    return
