#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ListPatient.h"


enum URGENCY_PRIORITY{
    RED = 10,
    ORANGE = 9,
    YELLOW = 8,
    GREEN = 7,
    BLUE = 5,
    WHITE = 0

};
Lista* l;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    l = inicializa();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    patient newPatient;
    newPatient.name = ui->PatientName->text().toStdString();
    newPatient.age = ui->AgePatient->value();
    newPatient.id = rand();

    Lista* novoNo ;
    switch(ui->emergencyColor->currentIndex()){
        case 0:
            novoNo->manchesterColor = novoNo->urgencyPriority = RED;
         break;
        case 1:
            novoNo->manchesterColor  = novoNo->urgencyPriority= ORANGE;
         break;
        case 2:
         novoNo->manchesterColor = novoNo->urgencyPriority = YELLOW;
        break;
        case 3:
         novoNo->manchesterColor = novoNo->urgencyPriority = GREEN;
        break;
        case 4:
         novoNo->manchesterColor = novoNo->urgencyPriority = BLUE;
        break;
        case 5:
            novoNo->manchesterColor = novoNo->urgencyPriority = WHITE;
        break;

    }

    if(ui->pain->checkState())
        novoNo->urgencyPriority += 10;

    if(ui->heart->checkState())
         novoNo->urgencyPriority += 50;

    if(ui->Sangrando->checkState())
         novoNo->urgencyPriority += 30;


    novoNo->patientData = newPatient;
    novoNo->prox = NULL;

    insere_ordenado(l,novoNo);

}
