#ifndef MAINLOJA_H
#define MAINLOJA_H

#include <QMainWindow>

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

private:
    Ui::MainLoja *ui;
};
#endif // MAINLOJA_H
