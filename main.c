#include <stdio.h>
#include "helper.h"

int main() {

    lista * lista=newlist();

    apilar(lista, newnodo(3));
    apilar(lista, newnodo(2));
    apilar(lista, newnodo(5));
    apilar(lista, newnodo(4));
    apilar(lista, newnodo(6));

    nodo * aux=lista->pri;

    if(buscarRecursivamente(aux, 2)==1){printf("el valor se encuentra en la lista\n");}else{printf("el valor NO se encuentra en la lista\n");}

    imprimir(lista);


    return 0;
}
