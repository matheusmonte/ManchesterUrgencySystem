struct lista {
    int urgencyPriority;
    string manchesterColor;
    patient patientData;
    struct lista* prox;
};

struct patient{
     int id;
     string name;
     string age;

};
typedef struct lista Lista;

Lista* inicializa (void);
Lista* insere_inicio (Lista* l, int cod, int nota);
void imprime (Lista* l);
int vazia (Lista* l);
Lista* busca (Lista* l, int cod);
Lista* retira (Lista* l, int cod);
void libera (Lista* l);
Lista* insere_ordenado (Lista* l, int cod, int nota);

