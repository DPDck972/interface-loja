#include "mainloja.h"
#include "ui_mainloja.h"
#include "loja.h"

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
    QCoreApplication::quit();
}


void MainLoja::on_tableWidget_CD_cellDoubleClicked(int row, int column)
{

}


void MainLoja::on_tableWidget_DVD_cellDoubleClicked(int row, int column)
{

}
