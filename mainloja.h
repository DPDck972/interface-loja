#ifndef MAINLOJA_H
#define MAINLOJA_H

#include <QMainWindow>
#include <QTableWidget>
#include "loja.h"
#include "incluirlivro.h"
#include "incluircd.h"
#include "incluirdvd.h"
#include "qlabel.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainLoja;
}
QT_END_NAMESPACE

class MainLoja : public QMainWindow
{
    Q_OBJECT

public:
    MainLoja(QWidget *parent = nullptr);
    ~MainLoja();

    void refresh_livros(QTableWidget *tabela);

    void refresh_CD(QTableWidget *tabela);

    void refresh_DVD(QTableWidget *tabela);

    void refresh(void);

private slots:
    void on_tableWidget_Livros_cellDoubleClicked(int row, int column);

    void on_tableWidget_CD_cellDoubleClicked(int row, int column);

    void on_tableWidget_DVD_cellDoubleClicked(int row, int column);

    void on_actionLer_triggered();

    void on_actionSalvar_triggered();

    void on_actionSair_triggered();

    void on_actionIncluir_livro_triggered();

    void on_actionIncluir_DVD_triggered();

    void on_actionIncluir_CD_triggered();

    void slotIncluirLivro(QString nome, QString preco, QString autor);

    void slotIncluirCD(QString nome, QString preco, QString numfaixas);

    void slotIncluirDVD(QString nome, QString preco, QString duracao);

private:
    Ui::MainLoja *ui;

    Loja X;

    IncluirLivro* inclLivro;
    IncluirCD* inclCD;
    IncluirDVD* inclDVD;

    QLabel* total_itens;

};
#endif // MAINLOJA_H
