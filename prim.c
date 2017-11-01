#include "prim.h"


void criano (no *temp, char *pais, int *pop, int *area, int *gdp){
    temp->pais = pais;
    temp->pop = *pop;
    temp->area = *area;
    temp->gdp = *gdp;
    temp->dir = NULL;
    temp->esq = NULL;
}

void preencheArvore(no *newnode, no **raiz){

    if(*raiz == NULL){
        (*raiz) = newnode;
    }
    else{
        printf("Arvore ");
    }
}
void preencheLista(no *temp, lista *listaPaises){
    printf("asdfasdf");
}