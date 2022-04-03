#ifndef __LISTA_H__
#define __LISTA_H__
#include "Nodo.h"
#include <stdbool.h>

typedef struct Lista
{
    Nodo *head;
    int num;
} Lista;


Lista *crear_lista();
void borrar_lista(Lista *l);
void insertar(Lista *l, Data d);
bool eliminar(Lista *l);
Nodo *buscar(Lista *l, Data d);
void imprimir(Lista *l);

#endif