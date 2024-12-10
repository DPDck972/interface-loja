#ifndef INCLUIRCD_H
#define INCLUIRCD_H

#include "loja.h"
#include <QDialog>

namespace Ui {
class IncluirCD;
}

class IncluirCD : public QDialog
{
    Q_OBJECT
signals:
    void signIncluirCD(QString nome, QString preco, QString numfaixas);

public:
    explicit IncluirCD(QWidget *parent = nullptr);
    ~IncluirCD();

    void clear();

public slots:
    void on_buttonBox_accepted();

private:
    Ui::IncluirCD *ui;
    CD incluso;
};

#endif // INCLUIRCD_H
