#ifndef __NODO_H__
#define __NODO_H__

typedef int Data;

typedef struct Nodo
{
    Data dato;
    struct Nodo *sig;
}Nodo;

Nodo* crear_nodo(Data);
void borrar_nodo(Nodo *);
void actualizar(Nodo*, Data);



#endif