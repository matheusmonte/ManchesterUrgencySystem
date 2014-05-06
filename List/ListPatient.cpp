#include <iostream>
#include <string>
#include "ListPatient.h"

using namespace std;
/* fun��o de inicializa��o: retorna uma lista vazia */
Lista* inicializa (void){
    return NULL;
}

/* inser��o no in�cio: retorna a lista atualizada */
Lista* insere_inicio (Lista* l, patient patientData, string UrgencyColor, int priority){
    Lista* novoNO = (Lista*) malloc(sizeof(Lista));
    novoNO->urgencyPriority = priority;
	novoNO->manchesterColor = UrgencyColor;
	novoNO->patientData = patientData;
	novoNO->prox = NULL;
    return novoNO;
}


/* fun��o imprime: imprime valores dos elementos */
void imprime (Lista* l){
    Lista* p; /* vari�vel auxiliar para percorrer a lista */
    for (p = l; p != NULL; p = p->prox){
       
    }
}

/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */
int vazia (Lista* l){
    return (l == NULL);
}

/* fun��o busca: busca um elemento na lista */
Lista* busca (Lista* l, int priority){
    Lista* p;
    for (p=l; p!=NULL; p=p->prox)
    if (p->urgencyPriority == priority){
        //printf("Nota = %d\n", p->nota);
        return p;
    }
    return NULL; /* n�o achou o elemento */
}

/* fun��o retira: retira elemento da lista */
Lista* retira (Lista* l, int priority) {
    Lista* ant = NULL; /* ponteiro para elemento anterior */
    Lista* p = l; /* ponteiro para percorrer a lista*/
    /* procura elemento na lista, guardando anterior */
    while (p != NULL && p->urgencyPriority != priority) {
        ant = p;
        p = p->prox;
    }
    /* verifica se achou elemento */
    if (p == NULL)
    return l; /* n�o achou: retorna lista original */
    /* retira elemento */
    if (ant == NULL) {
    /* retira elemento do inicio */
        l = p->prox;
    }else{
        /* retira elemento do meio da lista */
        ant->prox = p->prox;
    }
    free(p);
    return l;
}

void libera (Lista* l){
    Lista* p = l;
    while (p != NULL) {
        Lista* t = p->prox; /* guarda refer�ncia para o pr�ximo elemento
        */
        free(p); /* libera a mem�ria apontada por p */
        p = t; /* faz p apontar para o pr�ximo */
    }
}




/* fun��o insere_ordenado: insere elemento em ordem */
Lista* insere_ordenado (Lista* l, Lista* _novoNo){
	Lista* novoNo = _novoNo ;/* cria novo n� */
    Lista* ant = NULL; /* ponteiro para elemento anterior */
    Lista* p = l; /* ponteiro para percorrer a lista*/
    /* procura posi��o de inser��o */
	while (p != NULL && p->urgencyPriority < novoNo->urgencyPriority) {
        ant = p;
        p = p->prox;
    }
    /* insere elemento */
    if (ant == NULL) { /* insere elemento no in�cio */
        novoNo->prox = l;
        l = novoNo;
    }else{ /* insere elemento no meio da lista */
        novoNo->prox = ant->prox;
        ant->prox = novoNo;
    }
    return l;
}
