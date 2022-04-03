#include "Lista.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Funcion que se encarga de Crear la lISTA circular
 * 
 * @return ListaCir* 
 */
ListaCir *crear_lista(){
    ListaCir *l = (ListaCir*)malloc(sizeof(ListaCir));
    l->head = NULL;
    l->num = 0;
    return l;
}

/**
 * @brief Funcion que se encarga de borrar la lista
 * 
 * @param l ListaCricular
 */
void borrar_lista(ListaCir *l){
    Nodo *tmp = l->head;
    while (l->num > 0)
    {
        l->head = l->head->sig;
        free(tmp);
        tmp = l->head;
        l->num--;
    }
    free(l);
}

/**
 * @brief Funcion que crea la lista
 * 
 * @param l Lista
 * @param d Dato
 */
void insertar(ListaCir *l, Data d){
    Nodo *nuevo = crear_nodo(d);
    nuevo->sig = l->head;
    l->head = nuevo;
    l->num++;
}

/**
 * @brief Funcion que se encarga de Eliminar elementos en la lISTA
 * 
 * @param l lISTA 
 */
void eliminar(ListaCir *l){
    Nodo *tmp;
    tmp = l->head;
    l->head = l->head->sig;
    free(tmp);
    tmp = NULL;
    l->num--;
}

/**
 * @brief Funcion que se dedica a buscar el elemento en la lista
 * 
 * @param l Lista
 * @param d Dato
 * @return Nodo* 
 */
Nodo *buscar(ListaCir *l, Data d){
    Nodo *tmp =l->head;
    while (tmp != NULL)
    {
        if(tmp->dato == d) return tmp;
        tmp = tmp->sig;
    }
    return NULL;
}

void imprimir(ListaCir *l){
    printf("[ ");
    for(Nodo *tmp=l->head; tmp!=NULL; tmp =tmp->sig){
        printf("%d ", tmp->dato);
    }
    printf("]\n");
}