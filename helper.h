//
// Created by mauri on 03/09/22.
//

#ifndef BUSCARVALORRECURSIVAMENTE_HELPER_H
#define BUSCARVALORRECURSIVAMENTE_HELPER_H
typedef struct nodo{

    int cod;
    struct nodo * sig;
    struct nodo * ant;

}nodo;

typedef struct lista{

    int cant;
    nodo * pri;
    nodo * ult;

}lista;

lista * newlist(void);

nodo * newnodo(int);

lista * apilar(lista*, nodo*);

void imprimir(lista*);

int buscarRecursivamente(nodo *, int);
#endif //BUSCARVALORRECURSIVAMENTE_HELPER_H
