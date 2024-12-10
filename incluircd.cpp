#include "incluircd.h"
#include "ui_incluircd.h"

IncluirCD::IncluirCD(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IncluirCD)
{
    ui->setupUi(this);
}

IncluirCD::~IncluirCD()
{
    delete ui;
}

void IncluirCD::clear(){
    ui->Especifico_value->clear();
    ui->Nome_value->clear();
    ui->Preco_value->clear();
}

void IncluirCD::on_buttonBox_accepted()
{
    QString nome, preco, numfaixas;
    nome = ui->Nome_value->text();
    preco = ui->Preco_value->text();
    numfaixas = ui->Especifico_value->text();

    emit signIncluirCD(nome,preco,numfaixas);
}
