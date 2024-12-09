#include "mainloja.h"
#include "ui_mainloja.h"
#include "loja.h"

#include <QFileDialog>
#include <QMessageBox>

MainLoja::MainLoja(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainLoja)
{
    ui->setupUi(this);
}

MainLoja::~MainLoja()
{
    delete ui;
}

void MainLoja::on_tableWidget_Livros_cellDoubleClicked(int row, int column)
{

}


void MainLoja::on_tableWidget_CD_cellDoubleClicked(int row, int column)
{

}


void MainLoja::on_tableWidget_DVD_cellDoubleClicked(int row, int column)
{

}

void MainLoja::on_actionLer_triggered()
{
    QString fileName = QFileDialog::
        getOpenFileName(this,
                        "Ler estoque",
                        QString(),
                        "Estoque (*.txt)");

    if(!fileName.isEmpty()){
        if(!X.ler(fileName.toStdString())){
            QMessageBox::critical(this, "Error", "Não foi possivel ler este estoque");
            return;
        }

        QMessageBox::information(this, "Exito", "A leitura do estoque foi executa com sucesso");
    }
    ///Atualizar frontend;
}


void MainLoja::on_actionSalvar_triggered()
{
    QString fileName = QFileDialog::
        getSaveFileName(this,
                        "Salvar estoque",
                        QString(),
                        "Estoque (*.txt)");
    if(!fileName.isEmpty()){
        if(!X.salvar(fileName.toStdString())){
            QMessageBox::critical(this, "Error", "Não foi possivel salvar este estoque");
            return;
        }
        QMessageBox::information(this, "Exito", "O estoque foi salvo com sucesso");
    }
}


void MainLoja::on_actionSair_triggered()
{
    QCoreApplication::quit();
}

