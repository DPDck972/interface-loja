#include "incluirdvd.h"
#include "ui_incluirdvd.h"

IncluirDVD::IncluirDVD(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IncluirDVD)
    , incluso()
{
    ui->setupUi(this);
}

IncluirDVD::~IncluirDVD()
{
    delete ui;
}

void IncluirDVD::clear(){
    ui->Especifico_value->clear();
    ui->Nome_value->clear();
    ui->Preco_value->clear();
}


void IncluirDVD::on_buttonBox_accepted()
{
    QString nome, preco, duracao;
    nome = ui->Nome_value->text();
    preco = ui->Preco_value->text();
    duracao = ui->Especifico_value->text();

    emit signIncluirDVD(nome,preco,duracao);
}
