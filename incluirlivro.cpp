#include "incluirlivro.h"
#include "ui_incluirlivro.h"

IncluirLivro::IncluirLivro(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IncluirLivro)
{
    ui->setupUi(this);
}

IncluirLivro::~IncluirLivro()
{
    delete ui;
}

void IncluirLivro::clear()
{
    ui->Especifico_value->clear();
    ui->Nome_value->clear();
    ui->Preco_value->clear();
}


void IncluirLivro::on_buttonBox_accepted()
{
    QString nome, preco, autor;
    nome = ui->Nome_value->text();
    preco = ui->Preco_value->text();
    autor = ui->Especifico_value->text();

    emit signIncluirLivro(nome,preco,autor);
}

