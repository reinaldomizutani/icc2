#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct nodes{
    char *pais;
    long pop;
    long area;
    int gdp;
    struct nodes *dir, *esq;
} no;

typedef struct{
    no* raiz;
} arvore;

typedef struct{
    no *ini, *fim;
}lista;

void criano (no *temp, char *pais, int *pop, int *area, int *gdp);
void preencheArvore(no *temp, arvore *paises);
void preencheLista(no*temp, lista *listaPaises);
