#ifndef MAINLOJA_H
#define MAINLOJA_H

#include <QMainWindow>
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

private slots:
    void on_tableWidget_Livros_cellDoubleClicked(int row, int column);

    void on_tableWidget_CD_cellDoubleClicked(int row, int column);

    void on_tableWidget_DVD_cellDoubleClicked(int row, int column);

    void on_actionLer_triggered();

    void on_actionSalvar_triggered();

    void on_actionSair_triggered();

private:
    Ui::MainLoja *ui;

    Loja X;

    IncluirLivro* inclLivro;
    IncluirCD* inclCD;
    IncluirDVD* inclDVD;

    QLabel* total_itens;

};
#endif // MAINLOJA_H
