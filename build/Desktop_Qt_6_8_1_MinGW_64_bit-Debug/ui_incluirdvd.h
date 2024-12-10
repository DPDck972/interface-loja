/********************************************************************************
** Form generated from reading UI file 'incluirdvd.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCLUIRDVD_H
#define UI_INCLUIRDVD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_IncluirDVD
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *Titulo;
    QLabel *Nome;
    QLabel *Preco;
    QLabel *Duracao;
    QLineEdit *Nome_value;
    QLineEdit *Preco_value;
    QLineEdit *Especifico_value;

    void setupUi(QDialog *IncluirDVD)
    {
        if (IncluirDVD->objectName().isEmpty())
            IncluirDVD->setObjectName("IncluirDVD");
        IncluirDVD->resize(300, 200);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MediaOptical));
        IncluirDVD->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(IncluirDVD);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(50, 140, 211, 51));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        buttonBox->setCenterButtons(true);
        Titulo = new QLabel(IncluirDVD);
        Titulo->setObjectName("Titulo");
        Titulo->setGeometry(QRect(90, 10, 107, 16));
        Titulo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Nome = new QLabel(IncluirDVD);
        Nome->setObjectName("Nome");
        Nome->setGeometry(QRect(20, 50, 50, 16));
        Preco = new QLabel(IncluirDVD);
        Preco->setObjectName("Preco");
        Preco->setGeometry(QRect(20, 80, 50, 16));
        Duracao = new QLabel(IncluirDVD);
        Duracao->setObjectName("Duracao");
        Duracao->setGeometry(QRect(20, 110, 50, 16));
        Nome_value = new QLineEdit(IncluirDVD);
        Nome_value->setObjectName("Nome_value");
        Nome_value->setGeometry(QRect(100, 50, 190, 24));
        Preco_value = new QLineEdit(IncluirDVD);
        Preco_value->setObjectName("Preco_value");
        Preco_value->setGeometry(QRect(100, 80, 190, 24));
        Especifico_value = new QLineEdit(IncluirDVD);
        Especifico_value->setObjectName("Especifico_value");
        Especifico_value->setGeometry(QRect(100, 110, 190, 24));

        retranslateUi(IncluirDVD);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IncluirDVD, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IncluirDVD, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IncluirDVD);
    } // setupUi

    void retranslateUi(QDialog *IncluirDVD)
    {
        IncluirDVD->setWindowTitle(QCoreApplication::translate("IncluirDVD", "Incluir DVD", nullptr));
        Titulo->setText(QCoreApplication::translate("IncluirDVD", "INCLUIR NOVO DVD", nullptr));
        Nome->setText(QCoreApplication::translate("IncluirDVD", "Nome:", nullptr));
        Preco->setText(QCoreApplication::translate("IncluirDVD", "Pre\303\247o:", nullptr));
        Duracao->setText(QCoreApplication::translate("IncluirDVD", "Dura\303\247\303\243o:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncluirDVD: public Ui_IncluirDVD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCLUIRDVD_H
