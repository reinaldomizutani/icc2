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
        preencheArvore(temp, &paises.raiz);
        preencheLista(temp, &listaPaises);
        printf("%s, %d, %d, %d\n",  temp->pais, temp->pop, temp->area, temp->gdp);
    }

    printf("\n\n%s\n\n", paises.raiz->pais);
    return 0;
}


/*
int instree(node **raiz, int *valor){
	if(*raiz == NULL){// ESTA PORRA TA DANDO ERRADO COROLHO
		*raiz = (node*) malloc (sizeof(node));
		(*raiz)->elem = *valor;
		(*raiz)->left = NULL;
		(*raiz)->right = NULL;
		return 1;
	}
	else if(*valor < (*raiz)->elem){
		return(instree(&(*raiz)->left, valor));
		}
	else if(*valor >= (*raiz)->elem){
		return(instree(&(*raiz)->right, valor));
		}
	else{
		return 0;
		}
}
*/