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

private:
    Ui::MainLoja *ui;
};
#endif // MAINLOJA_H
