#ifndef INCLUIRDVD_H
#define INCLUIRDVD_H

#include <QDialog>
#include "loja.h"

namespace Ui {
class IncluirDVD;
}

class IncluirDVD : public QDialog
{
    Q_OBJECT
signals:
    void signIncluirDVD(QString nome, QString preco, QString duracao);

public:
    explicit IncluirDVD(QWidget *parent = nullptr);
    ~IncluirDVD();

    void clear();

public slots:
    void on_buttonBox_accepted();

private:
    Ui::IncluirDVD *ui;
    DVD incluso;
};

#endif // INCLUIRDVD_H
