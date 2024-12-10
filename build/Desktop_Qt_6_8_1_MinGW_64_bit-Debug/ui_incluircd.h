/********************************************************************************
** Form generated from reading UI file 'incluircd.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCLUIRCD_H
#define UI_INCLUIRCD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_IncluirCD
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

    void setupUi(QDialog *IncluirCD)
    {
        if (IncluirCD->objectName().isEmpty())
            IncluirCD->setObjectName("IncluirCD");
        IncluirCD->resize(300, 200);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MediaTape));
        IncluirCD->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(IncluirCD);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(50, 140, 211, 51));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        buttonBox->setCenterButtons(true);
        Titulo = new QLabel(IncluirCD);
        Titulo->setObjectName("Titulo");
        Titulo->setGeometry(QRect(90, 10, 107, 16));
        Titulo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Nome = new QLabel(IncluirCD);
        Nome->setObjectName("Nome");
        Nome->setGeometry(QRect(20, 50, 50, 16));
        Preco = new QLabel(IncluirCD);
        Preco->setObjectName("Preco");
        Preco->setGeometry(QRect(20, 80, 50, 16));
        Duracao = new QLabel(IncluirCD);
        Duracao->setObjectName("Duracao");
        Duracao->setGeometry(QRect(20, 110, 70, 16));
        Nome_value = new QLineEdit(IncluirCD);
        Nome_value->setObjectName("Nome_value");
        Nome_value->setGeometry(QRect(100, 50, 190, 24));
        Preco_value = new QLineEdit(IncluirCD);
        Preco_value->setObjectName("Preco_value");
        Preco_value->setGeometry(QRect(100, 80, 190, 24));
        Especifico_value = new QLineEdit(IncluirCD);
        Especifico_value->setObjectName("Especifico_value");
        Especifico_value->setGeometry(QRect(100, 110, 190, 24));

        retranslateUi(IncluirCD);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IncluirCD, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IncluirCD, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IncluirCD);
    } // setupUi

    void retranslateUi(QDialog *IncluirCD)
    {
        IncluirCD->setWindowTitle(QCoreApplication::translate("IncluirCD", "Incluir CD", nullptr));
        Titulo->setText(QCoreApplication::translate("IncluirCD", "INCLUIR NOVO CD", nullptr));
        Nome->setText(QCoreApplication::translate("IncluirCD", "Nome:", nullptr));
        Preco->setText(QCoreApplication::translate("IncluirCD", "Pre\303\247o:", nullptr));
        Duracao->setText(QCoreApplication::translate("IncluirCD", "N\302\272 de faixas:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncluirCD: public Ui_IncluirCD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCLUIRCD_H
