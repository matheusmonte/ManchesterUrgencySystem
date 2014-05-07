#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "ListPatient.h"

using namespace std;
/* função de inicialização: retorna uma lista vazia */
Lista* inicializa (void){
    return NULL;
}





/* função imprime: imprime valores dos elementos */
void imprime (Lista* l){
    Lista* p; /* variável auxiliar para percorrer a lista */
    for (p = l; p != NULL; p = p->prox){
		cout<<"--------"<<endl;
		cout<<p->manchesterColor<<" "<<p->patientData.name <<endl;
    }
}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
int vazia (Lista* l){
    return (l == NULL);
}

/* função busca: busca um elemento na lista */
Lista* busca (Lista* l, int priority){
    Lista* p;
    for (p=l; p!=NULL; p=p->prox)
    if (p->urgencyPriority == priority){
        //printf("Nota = %d\n", p->nota);
        return p;
    }
    return NULL; /* não achou o elemento */
}

/* função retira: retira elemento da lista */
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
    return l; /* não achou: retorna lista original */
    /* retira elemento */
    if (ant == NULL) {
    /* retira elemento do inicio */
        l = p->prox;
    }else{
        /* retira elemento do meio da lista */
        ant->prox = p->prox;
    }
    free (p);
    return l;
}

void libera (Lista* l){
    Lista* p = l;
    while (p != NULL) {
        Lista* t = p->prox; /* guarda referência para o próximo elemento
        */
        free (p); /* libera a memória apontada por p */
        p = t; /* faz p apontar para o próximo */
    }
}




/* função insere_ordenado: insere elemento em ordem */
Lista* insere_ordenado (Lista* l, Lista* _novoNo){
	Lista* novoNo = _novoNo ;/* cria novo nó */
    Lista* ant = NULL; /* ponteiro para elemento anterior */
    Lista* p = l; /* ponteiro para percorrer a lista*/
    /* procura posição de inserção */
	while (p != NULL && p->urgencyPriority < novoNo->urgencyPriority) {
        ant = p;
        p = p->prox;
    }
    /* insere elemento */
    if (ant == NULL) { /* insere elemento no início */
        novoNo->prox = l;
        l = novoNo;
    }else{ /* insere elemento no meio da lista */
        novoNo->prox = ant->prox;
        ant->prox = novoNo;
    }
    return l;
}

enum URGENCY_PRIORITY{
	RED = 10,
	ORANGE = 9,
	YELLOW = 8,
	GREEN = 7,
	BLUE = 5,
	WHITE = 0

};


/*int main(void){
    Lista* l;
    l = inicializa();

	
	patient pc ;
	pc.age = 13;
	pc.id = 0;
	pc.name = "Teste RED";

	Lista* novoP;
	novoP->manchesterColor = novoP->urgencyPriority =RED;

	//simular dor:
	novoP->urgencyPriority += 10;

	//simular sangramento
	novoP->urgencyPriority += 20;

	//simular anomalia coronaria

	novoP->urgencyPriority +=50;
	novoP->patientData = pc;


	novoP->urgencyPriority += pc.age;
	insere_ordenado(l, novoP);

	//outro paciente
    pc.age = 70;
	pc.id = 0;
	pc.name = "Teste RED 2";


	//simular sangramento
	novoP->urgencyPriority += 20;

	//simular anomalia coronaria

	novoP->urgencyPriority +=50;
	novoP->patientData = pc;


	novoP->urgencyPriority += pc.age;
		insere_ordenado(l, novoP);
		imprime(l);
		cin>>novoP->urgencyPriority;
}*/
