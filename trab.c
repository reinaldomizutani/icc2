#include "trab.h"


void instree(no **raiz, char *pais, int *area, int *pop, int *gdp){
	int i=0;
	char aux = 'a';
	if(*raiz == NULL){
		*raiz = (no*) malloc (sizeof(no));
		(*raiz)->area = *area;
		(*raiz)->gdp = *gdp;
		(*raiz)->pop = *pop;
		while(aux != '\0'){
			aux = pais[i];
			i++;
		}
		(*raiz)->pais = (char*)malloc(i*sizeof(char));
		strcpy((*raiz)->pais, pais);
		(*raiz)->dir = NULL;
		(*raiz)->esq = NULL;
	}

}

void insvet(no **vetor, char *pais, long area, long pop, int gdp, int i){
	
	(*vetor) = (no*) realloc ((*vetor), (i+1)*sizeof(no));

	char aux = 'a';
	int j=0;
	(*vetor)[i].pais = NULL;
	
	while(aux != '\0'){
		(*vetor)[i].pais = (char*) realloc ((*vetor)[i].pais, (j+1)*sizeof(char));
		(*vetor)[i].pais[j] = pais[j];
		aux = pais[j];
		j++;
	}
		
	(*vetor)[i].pais[j] = '\0';
	(*vetor)[i].area = area;
	(*vetor)[i].pop = pop;
	(*vetor)[i].gdp = gdp;
	printf("vetor.pais = %s, %ld, %ld %d\n\n", (*vetor)[i].pais, (*vetor)[i].area, (*vetor)[i].pop, (*vetor)[i].gdp);
	j=0;
	
}


/*	vetor = (no*) realloc (vetor, i*sizeof(no));
	vetor[i].dir = NULL;
	vetor[i].esq = NULL;

	char aux = 'a';
	int j=0;
	vetor[i].pais = NULL;
	while(aux != '\0'){
		aux = pais[j];
		vetor[i].pais = (char*) realloc (vetor[i].pais, (j+1)*sizeof(char));
		vetor[i].pais[j] = aux;
		j++;
		printf("%c", vetor[i].pais[j]);
	}
	
	vetor[i].pais[j] = '\0';
	printf("vetor.pais = %s\n\n", vetor[i].pais);
	vetor[i].area = area;
	vetor[i].pop = pop;
	vetor[i].gdp = gdp;
	printf("vetor.pais = %s, %ld, %ld %d\n\n", vetor[i].pais, vetor[i].area, vetor[i].pop, vetor[i].gdp);
	j=0;*/
	