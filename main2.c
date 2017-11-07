#include "trab.c"

int main(){
    FILE *fp;
    fp = fopen("paises.txt", "r");
    char pais[25], aux = 'a';
    long area, pop;
    int gdp, i=0, j=0;
    arvore arv;
    arv.raiz = NULL;
    no *vetor= NULL;
    

    while(!feof(fp)){
        fscanf(fp, "%s %ld %ld %d", pais, &area, &pop, &gdp);
        insvet(&vetor, pais, area, pop, gdp, i);
		printf("no while da main: %s\n\n", vetor[i].pais);
        i++;
    }
    //printf("\n\n%s\n\n", arv.raiz->pais);
	free(vetor);
    return 0;
}

//instree(&arv.raiz, pais, &area, &pop, &gdp); -> funcionando 