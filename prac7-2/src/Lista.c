#include "Lista.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Funcion que se Crea la Lista Simple
 * 
 * @return Lista* l
 */

Lista *crear_lista(){
    Lista *l = (Lista*)malloc(sizeof(Lista));
    l->head = NULL;
    l->num = 0;
    return l;
}

/**
 * @brief Funcion que Borra la Lista
 * 
 * @param l Lista
 */
void borrar_lista(Lista *l){
    Nodo *tmp = l->head;
    while (tmp!=NULL)
    {
        l->head = l->head->sig;
        free(tmp);
        tmp = l->head;
        l->num--;
    }
    free(l);
}

/**
 * @brief Funcion que inserta en la la Lista
 * 
 * @param l lista
 * @param d Dato
 */
void insertar(Lista *l, Data d){
    Nodo *nuevo = crear_nodo(d);
    nuevo->sig = l->head;
    l->head = nuevo;
    l->num++;
}
/**
 * @brief Funcion que elimina en la lISTA
 * 
 * @param l lista
 * @return true si pudo eliminar
 * @return false si no pudo eliminar
 */
bool eliminar(Lista *l){
    Nodo *tmp= NULL;
    tmp = l->head;
    l->head = l->head->sig;
    free(tmp);
    tmp = NULL;
    l->num--;
    return true;
}

/**
 * @brief Funcion que busca en la lISTA
 * 
 * @param l lISTA
 * @param d dATO
 * @return Nodo*  
 */
Nodo *buscar(Lista *l, Data d){
    Nodo *tmp =l->head;
    while (tmp != NULL)
    {
        if(tmp->dato == d) 
        tmp = tmp->sig;
        return tmp;
    }
    return NULL;
}

/**
 * @brief Funcion que imprime la Lista
 * 
 * @param l Lista
 */

void imprimir(Lista *l){
    printf("[ ");
    for(Nodo *tmp=l->head; tmp!=NULL; tmp =tmp->sig){
        printf("%d ", tmp->dato);
    }
    printf("]\n");
}