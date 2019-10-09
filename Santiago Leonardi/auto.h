#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED

typedef struct
{
    int id;
    char patente;
    int idMarca;
    int idColor;
    int modelo;
    int isEmpty;
}eAuto;

int generica_init(eAuto* list, int len);
int generica_buscarEspacio (eAuto* list, int len);
int generica_add(eAuto* list, int len);

#endif // AUTO_H_INCLUDED
