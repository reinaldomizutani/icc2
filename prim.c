#include "prim.h"


void criano (no *temp, char *pais, int *pop, int *area, int *gdp){
    temp->pais = pais;
    temp->pop = *pop;
    temp->area = *area;
    temp->gdp = *gdp;
}

void preencheArvore(no *newnode, arvore *paises){
    no *aux;
    aux = (no*)malloc(sizeof(no));
    aux = newnode;
    if(paises->raiz == NULL){
        paises->raiz = aux;
    }
    else{
        printf("asdfasdf");
    }
}
void preencheLista(no*temp, lista *listaPaises){
    printf("asdfasdf");
}