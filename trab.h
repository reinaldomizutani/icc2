#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    struct node *esq, *dir;
    char *pais;
    int gdp;
    long pop, area;
}no;

typedef struct{
    no *raiz;
} arvore;

void instree(no **raiz, char *pais, int *area, int *pop, int *gdp);
void insvet(no **vetor, char *pais, long area, long pop, int gdp, int i);