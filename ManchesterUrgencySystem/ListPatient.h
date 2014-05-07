#include <iostream>


using namespace::std;


struct patient{
     int id;
     string name;
     int age;

};

struct listPatient {
    int urgencyPriority;
    int manchesterColor;
    patient patientData;
    struct listPatient* prox;
};


typedef struct listPatient Lista;

Lista* inicializa (void);

void imprime (Lista* l);
int vazia (Lista* l);
Lista* busca (Lista* l, int cod);
Lista* retira (Lista* l, int cod);
void libera (Lista* l);
Lista* insere_ordenado (Lista* l, Lista* _novoNo);

