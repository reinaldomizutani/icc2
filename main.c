#include "prim.c"


int main(){
    FILE *fp;
    int area, pop, gdp;
    char *pais;
    pais = (char*)malloc(sizeof(char));
    fp = fopen("paises.txt", "r");

// structs
    no *temp;
    temp = (no*) malloc (sizeof(no));
    temp->pais = (char*)malloc(sizeof(char));
    arvore paises;
    paises.raiz = NULL;
    lista listaPaises;
    listaPaises.ini = NULL;
    listaPaises.fim = NULL;

    while(!feof(fp)){
        fscanf(fp, "%s %d %d %d", pais, &pop, &area, &gdp);
        criano (temp, pais, &pop, &area, &gdp);
        preencheArvore(temp, &paises);
        preencheLista(temp, &listaPaises);
        printf("%s, %d, %d, %d\n",  temp->pais, temp->pop, temp->area, temp->gdp);
    }
    return 0;
}