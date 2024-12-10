#include "mainloja.h"
#include "ui_mainloja.h"
#include "loja.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QTableWidget>

MainLoja::MainLoja(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainLoja)
    , X()
    , inclLivro(new IncluirLivro(this))
    , inclCD(new IncluirCD(this))
    , inclDVD(new IncluirDVD(this))
    , total_itens(new QLabel(QString::number(X.getNumLivro() + X.getNumCD() + X.getNumDVD())))
{
    ui->setupUi(this);

    //Status Bar
    QLabel* label = new QLabel("Total de itens: ");
    ui->statusBar->insertWidget(0,label);
    ui->statusBar->insertWidget(1,total_itens);
    ui->statusBar->setStyleSheet("QStatusBar::item { border: none; }");

    //connect
    connect(inclLivro,&IncluirLivro::signIncluirLivro,this,&MainLoja::slotIncluirLivro);
    connect(inclDVD,&IncluirDVD::signIncluirDVD,this,&MainLoja::slotIncluirDVD);
    connect(inclCD,&IncluirCD::signIncluirCD,this,&MainLoja::slotIncluirCD);

    //Correções
    ui->tableWidget_Livros->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->tableWidget_Livros->horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);
    ui->tableWidget_Livros->horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);

    ui->tableWidget_CD->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->tableWidget_CD->horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);
    ui->tableWidget_CD->horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);

    ui->tableWidget_DVD->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->tableWidget_DVD->horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);
    ui->tableWidget_DVD->horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);

    this->refresh();
}

MainLoja::~MainLoja()
{
    delete ui;
    delete inclLivro;
    delete inclCD;
    delete inclDVD;
    delete total_itens;
}

void MainLoja::refresh_livros(QTableWidget* tabela){
    //Exibir lista
    tabela->clearContents();

    //Criando novas linhas;
    tabela->setRowCount(X.getNumLivro());

    //Iniciando tabelas;
    for(int i=0; i < tabela->rowCount(); i++){
        QLabel* prov;
        Livro L = X.getLivro(i);

        //Nome;
        prov = new QLabel(L.getNome().c_str());
        prov->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        tabela->setCellWidget(i,0,prov);

        //Preço;
        prov = new QLabel(QString::number(L.getPreco(),'f',2));
        prov->setAlignment(Qt::AlignRight|Qt::AlignVCenter);
        tabela->setCellWidget(i,1,prov);

        //Especifico;
        prov = new QLabel(L.getAutor().c_str());
        prov->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        tabela->setCellWidget(i,2,prov);
    }
    total_itens->setNum(X.getNumLivro() + X.getNumCD() + X.getNumDVD());
}

void MainLoja::refresh_CD(QTableWidget* tabela){
    //Exibir lista
    tabela->clearContents();

    //Criando novas linhas;
    tabela->setRowCount(X.getNumCD());

    //Iniciando tabelas;
    for(int i=0; i < tabela->rowCount(); i++){
        QLabel* prov;
        CD L = X.getCD(i);

        //Nome;
        prov = new QLabel(L.getNome().c_str());
        prov->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        tabela->setCellWidget(i,0,prov);

        //Preço;
        prov = new QLabel(QString::number(L.getPreco(),'f',2));
        prov->setAlignment(Qt::AlignRight|Qt::AlignVCenter);
        tabela->setCellWidget(i,1,prov);

        //Especifico;
        prov = new QLabel(QString::number(L.getNumFaixas()));
        prov->setAlignment(Qt::AlignCenter|Qt::AlignVCenter);
        tabela->setCellWidget(i,2,prov);
    }
    total_itens->setNum(X.getNumLivro() + X.getNumCD() + X.getNumDVD());
}

void MainLoja::refresh_DVD(QTableWidget* tabela){
    //Exibir lista
    tabela->clearContents();

    //Criando novas linhas;
    tabela->setRowCount(X.getNumDVD());

    //Iniciando tabelas;
    for(int i=0; i < tabela->rowCount(); i++){
        QLabel* prov;
        DVD L = X.getDVD(i);

        //Nome;
        prov = new QLabel(L.getNome().c_str());
        prov->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        tabela->setCellWidget(i,0,prov);

        //Preço;
        prov = new QLabel(QString::number(L.getPreco(),'f',2));
        prov->setAlignment(Qt::AlignRight|Qt::AlignVCenter);
        tabela->setCellWidget(i,1,prov);

        //Especifico;
        prov = new QLabel(QString::number(L.getDuracao()));
        prov->setAlignment(Qt::AlignCenter|Qt::AlignVCenter);
        tabela->setCellWidget(i,2,prov);
    }
    total_itens->setNum(X.getNumLivro() + X.getNumCD() + X.getNumDVD());
}

void MainLoja::refresh(void){
    refresh_livros(ui->tableWidget_Livros);
    refresh_CD(ui->tableWidget_CD);
    refresh_DVD(ui->tableWidget_DVD);
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
            //return; perguntar se deve resetar o estoque;
        }else{
        QMessageBox::information(this, "Exito", "A leitura do estoque foi executa com sucesso");
        }
    }
    ///Atualizar frontend;
    this->refresh();
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


void MainLoja::on_actionIncluir_livro_triggered()
{
    inclLivro->clear();
    inclLivro->show();
}


void MainLoja::on_actionIncluir_DVD_triggered()
{
    inclDVD->clear();
    inclDVD->show();
}


void MainLoja::on_actionIncluir_CD_triggered()
{
    inclCD->clear();
    inclCD->show();
}

void MainLoja::slotIncluirLivro(QString nome, QString preco, QString autor)
{
    if(nome.toStdString() != "" && preco.toDouble() > 0.0 && autor.toStdString() != ""){
        X.incluirLivro(Livro(nome.toStdString(),preco.toDouble(),autor.toStdString()));
        this->refresh_livros(ui->tableWidget_Livros);
    }else{
        QMessageBox::critical(this, "Error", "Não foi possivel incluir este item");
    }
}

void MainLoja::slotIncluirCD(QString nome, QString preco, QString numfaixas)
{
    if(nome.toStdString() != "" && preco.toDouble() > 0.0 && numfaixas.toInt() > 0){
        X.incluirCD(CD(nome.toStdString(),preco.toDouble(),numfaixas.toInt()));
        this->refresh_CD(ui->tableWidget_CD);
    }else{
        QMessageBox::critical(this, "Error", "Não foi possivel incluir este item");
    }
}

void MainLoja::slotIncluirDVD(QString nome, QString preco, QString duracao)
{
    if(nome.toStdString() != "" && preco.toDouble() > 0.0 && duracao.toInt() > 0){
        X.incluirDVD(DVD(nome.toStdString(),preco.toDouble(),duracao.toInt()));
        this->refresh_DVD(ui->tableWidget_DVD);
    }else{
        QMessageBox::critical(this, "Error", "Não foi possivel incluir este item");
    }
}

