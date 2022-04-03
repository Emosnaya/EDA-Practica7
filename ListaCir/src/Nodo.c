#include "Nodo.h"
#include <stdlib.h>


Nodo *crear_nodo(Data d){
    Nodo *n = (Nodo*)malloc(sizeof(Nodo));
    n->dato = d;
    n->sig = NULL;
    return n;
}
void borrar_nodo(Nodo *n){
    if (n->sig == NULL){
        free(n);
    }
}
void actualizar(Nodo*n, Data d){
    if (n!=NULL)
    {
        n->dato = d;
    }
    
}