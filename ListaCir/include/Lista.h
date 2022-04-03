#ifndef __LISTA_H__
#define __LISTA_H__
#include "Nodo.h"

typedef struct ListaCircular
{
    Nodo *head;
    int num;
} ListaCir;


ListaCir *crear_lista();
void borrar_lista(ListaCir *l);
void insertar(ListaCir *l, Data d);
void eliminar(ListaCir *l);
Nodo *buscar(ListaCir *l, Data d);
void imprimir(ListaCir*);

#endif