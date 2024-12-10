/********************************************************************************
** Form generated from reading UI file 'incluirlivro.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCLUIRLIVRO_H
#define UI_INCLUIRLIVRO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_IncluirLivro
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

    void setupUi(QDialog *IncluirLivro)
    {
        if (IncluirLivro->objectName().isEmpty())
            IncluirLivro->setObjectName("IncluirLivro");
        IncluirLivro->resize(300, 200);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        IncluirLivro->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(IncluirLivro);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(50, 140, 211, 51));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        buttonBox->setCenterButtons(true);
        Titulo = new QLabel(IncluirLivro);
        Titulo->setObjectName("Titulo");
        Titulo->setGeometry(QRect(90, 10, 121, 16));
        Titulo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Nome = new QLabel(IncluirLivro);
        Nome->setObjectName("Nome");
        Nome->setGeometry(QRect(20, 50, 50, 16));
        Preco = new QLabel(IncluirLivro);
        Preco->setObjectName("Preco");
        Preco->setGeometry(QRect(20, 80, 50, 16));
        Duracao = new QLabel(IncluirLivro);
        Duracao->setObjectName("Duracao");
        Duracao->setGeometry(QRect(20, 110, 70, 16));
        Nome_value = new QLineEdit(IncluirLivro);
        Nome_value->setObjectName("Nome_value");
        Nome_value->setGeometry(QRect(100, 50, 190, 24));
        Preco_value = new QLineEdit(IncluirLivro);
        Preco_value->setObjectName("Preco_value");
        Preco_value->setGeometry(QRect(100, 80, 190, 24));
        Especifico_value = new QLineEdit(IncluirLivro);
        Especifico_value->setObjectName("Especifico_value");
        Especifico_value->setGeometry(QRect(100, 110, 190, 24));

        retranslateUi(IncluirLivro);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IncluirLivro, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IncluirLivro, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IncluirLivro);
    } // setupUi

    void retranslateUi(QDialog *IncluirLivro)
    {
        IncluirLivro->setWindowTitle(QCoreApplication::translate("IncluirLivro", "Incluir Livro", nullptr));
        Titulo->setText(QCoreApplication::translate("IncluirLivro", "INCLUIR NOVO LIVRO", nullptr));
        Nome->setText(QCoreApplication::translate("IncluirLivro", "Nome:", nullptr));
        Preco->setText(QCoreApplication::translate("IncluirLivro", "Pre\303\247o:", nullptr));
        Duracao->setText(QCoreApplication::translate("IncluirLivro", "Autor:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncluirLivro: public Ui_IncluirLivro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCLUIRLIVRO_H
