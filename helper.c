//
// Created by mauri on 03/09/22.
//

#include <stdio.h>
#include <stdlib.h>
#include "helper.h"

void imprimir(lista * listaTrabajo) {

    int i=0;
    nodo * aux= listaTrabajo->pri;

    if(aux==NULL){
        printf("la lista esta vacia\n");
    }

    for(;aux!=NULL;aux=aux->sig){

        printf("%d:el codigo es: %d\n",i+1, aux->cod);
        i++;

    }
}


lista * newlist(void){

    lista * nueva = (lista *) malloc(sizeof (lista));

    if(nueva==NULL){
        printf("\nNo se ha podido asignar memoria a la nueva lista\n");
        exit(-1);
    }

    nueva->pri=NULL;
    nueva->cant=0;
    nueva->ult=NULL;

    return nueva;
}

nodo * newnodo(int cod){

    nodo * nuevo= (nodo *) malloc(sizeof (nodo));

    if(nuevo==NULL){
        printf("\nNo posee memoria suficiente, para crear un nuevo nodo\n");
        exit(-1);
    }

    nuevo->cod=cod;
    nuevo->sig=NULL;
    nuevo->ant=NULL;

    return nuevo;
}

lista *apilar(lista * listaTrabajo, nodo * nodoActual) {

    nodo * aux= listaTrabajo->pri;

    if(aux==NULL){

        listaTrabajo->pri=nodoActual;
        listaTrabajo->ult=nodoActual;
        listaTrabajo->cant++;

    }else{
        nodoActual->sig=aux;
        aux->ant=nodoActual;
        listaTrabajo->pri=nodoActual;
        listaTrabajo->cant++;
    }

    return listaTrabajo;

}

int buscarRecursivamente(nodo * aux, int numero) {

    if(aux==NULL){
        return 0;
    }else
    if(aux->cod==numero){
        return 1;
    }else{
        aux=aux->sig;
    }

return buscarRecursivamente(aux,numero);

}
