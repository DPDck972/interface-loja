/********************************************************************************
** Form generated from reading UI file 'mainloja.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINLOJA_H
#define UI_MAINLOJA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainLoja
{
public:
    QAction *actionLer;
    QAction *actionSalvar;
    QAction *actionSair;
    QAction *actionIncluir_livro;
    QAction *actionIncluir_CD;
    QAction *actionIncluir_DVD;
    QWidget *widget_central;
    QWidget *layoutWidget;
    QVBoxLayout *Layout_total;
    QHBoxLayout *LayoutLabel;
    QLabel *Label_Livros;
    QLabel *Label_CDs;
    QLabel *Label_DVD;
    QHBoxLayout *Layout_tables;
    QTableWidget *tableWidget_Livros;
    QTableWidget *tableWidget_CD;
    QTableWidget *tableWidget_DVD;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuItem;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainLoja)
    {
        if (MainLoja->objectName().isEmpty())
            MainLoja->setObjectName("MainLoja");
        MainLoja->resize(1000, 600);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::Computer));
        MainLoja->setWindowIcon(icon);
        MainLoja->setAutoFillBackground(false);
        MainLoja->setDocumentMode(false);
        actionLer = new QAction(MainLoja);
        actionLer->setObjectName("actionLer");
        actionSalvar = new QAction(MainLoja);
        actionSalvar->setObjectName("actionSalvar");
        actionSair = new QAction(MainLoja);
        actionSair->setObjectName("actionSair");
        actionIncluir_livro = new QAction(MainLoja);
        actionIncluir_livro->setObjectName("actionIncluir_livro");
        actionIncluir_CD = new QAction(MainLoja);
        actionIncluir_CD->setObjectName("actionIncluir_CD");
        actionIncluir_DVD = new QAction(MainLoja);
        actionIncluir_DVD->setObjectName("actionIncluir_DVD");
        widget_central = new QWidget(MainLoja);
        widget_central->setObjectName("widget_central");
        widget_central->setEnabled(true);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        widget_central->setFont(font);
        widget_central->setAutoFillBackground(true);
        layoutWidget = new QWidget(widget_central);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(9, 9, 971, 531));
        Layout_total = new QVBoxLayout(layoutWidget);
        Layout_total->setObjectName("Layout_total");
        Layout_total->setContentsMargins(0, 0, 0, 0);
        LayoutLabel = new QHBoxLayout();
        LayoutLabel->setObjectName("LayoutLabel");
        Label_Livros = new QLabel(layoutWidget);
        Label_Livros->setObjectName("Label_Livros");
        Label_Livros->setEnabled(true);
        Label_Livros->setAutoFillBackground(false);
        Label_Livros->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"background-color: lightgray;"));
        Label_Livros->setFrameShape(QFrame::Shape::Box);
        Label_Livros->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Label_Livros->setWordWrap(false);

        LayoutLabel->addWidget(Label_Livros);

        Label_CDs = new QLabel(layoutWidget);
        Label_CDs->setObjectName("Label_CDs");
        Label_CDs->setAutoFillBackground(false);
        Label_CDs->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"background-color: lightgray;"));
        Label_CDs->setFrameShape(QFrame::Shape::Box);
        Label_CDs->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Label_CDs->setWordWrap(false);

        LayoutLabel->addWidget(Label_CDs);

        Label_DVD = new QLabel(layoutWidget);
        Label_DVD->setObjectName("Label_DVD");
        Label_DVD->setAutoFillBackground(false);
        Label_DVD->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"background-color: lightgray;"));
        Label_DVD->setFrameShape(QFrame::Shape::Box);
        Label_DVD->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Label_DVD->setWordWrap(false);

        LayoutLabel->addWidget(Label_DVD);


        Layout_total->addLayout(LayoutLabel);

        Layout_tables = new QHBoxLayout();
        Layout_tables->setObjectName("Layout_tables");
        tableWidget_Livros = new QTableWidget(layoutWidget);
        if (tableWidget_Livros->columnCount() < 3)
            tableWidget_Livros->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Livros->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Livros->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Livros->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_Livros->setObjectName("tableWidget_Livros");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget_Livros->sizePolicy().hasHeightForWidth());
        tableWidget_Livros->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(211, 211, 211, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        tableWidget_Livros->setPalette(palette);
        tableWidget_Livros->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        tableWidget_Livros->setFrameShape(QFrame::Shape::StyledPanel);
        tableWidget_Livros->setFrameShadow(QFrame::Shadow::Sunken);
        tableWidget_Livros->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidget_Livros->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidget_Livros->setEditTriggers(QAbstractItemView::EditTrigger::AnyKeyPressed|QAbstractItemView::EditTrigger::DoubleClicked|QAbstractItemView::EditTrigger::EditKeyPressed);
        tableWidget_Livros->setTabKeyNavigation(false);
        tableWidget_Livros->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidget_Livros->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget_Livros->horizontalHeader()->setVisible(true);
        tableWidget_Livros->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_Livros->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget_Livros->verticalHeader()->setVisible(false);

        Layout_tables->addWidget(tableWidget_Livros);

        tableWidget_CD = new QTableWidget(layoutWidget);
        if (tableWidget_CD->columnCount() < 3)
            tableWidget_CD->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_CD->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_CD->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_CD->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget_CD->setObjectName("tableWidget_CD");
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        tableWidget_CD->setPalette(palette1);
        tableWidget_CD->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        tableWidget_CD->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidget_CD->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidget_CD->setTabKeyNavigation(false);
        tableWidget_CD->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidget_CD->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget_CD->verticalHeader()->setVisible(false);

        Layout_tables->addWidget(tableWidget_CD);

        tableWidget_DVD = new QTableWidget(layoutWidget);
        if (tableWidget_DVD->columnCount() < 3)
            tableWidget_DVD->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_DVD->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_DVD->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_DVD->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        tableWidget_DVD->setObjectName("tableWidget_DVD");
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        tableWidget_DVD->setPalette(palette2);
        tableWidget_DVD->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        tableWidget_DVD->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidget_DVD->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidget_DVD->setTabKeyNavigation(false);
        tableWidget_DVD->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidget_DVD->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget_DVD->verticalHeader()->setVisible(false);

        Layout_tables->addWidget(tableWidget_DVD);


        Layout_total->addLayout(Layout_tables);

        MainLoja->setCentralWidget(widget_central);
        menubar = new QMenuBar(MainLoja);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName("menuArquivo");
        menuItem = new QMenu(menubar);
        menuItem->setObjectName("menuItem");
        MainLoja->setMenuBar(menubar);
        statusBar = new QStatusBar(MainLoja);
        statusBar->setObjectName("statusBar");
        statusBar->setSizeGripEnabled(false);
        MainLoja->setStatusBar(statusBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuItem->menuAction());
        menuArquivo->addAction(actionLer);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuItem->addAction(actionIncluir_livro);
        menuItem->addAction(actionIncluir_CD);
        menuItem->addAction(actionIncluir_DVD);

        retranslateUi(MainLoja);

        QMetaObject::connectSlotsByName(MainLoja);
    } // setupUi

    void retranslateUi(QMainWindow *MainLoja)
    {
        MainLoja->setWindowTitle(QCoreApplication::translate("MainLoja", "Estoque em loja", nullptr));
        actionLer->setText(QCoreApplication::translate("MainLoja", "Ler...", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainLoja", "Salvar...", nullptr));
        actionSair->setText(QCoreApplication::translate("MainLoja", "Sair", nullptr));
        actionIncluir_livro->setText(QCoreApplication::translate("MainLoja", "Incluir Livro...", nullptr));
        actionIncluir_CD->setText(QCoreApplication::translate("MainLoja", "Incluir CD...", nullptr));
        actionIncluir_DVD->setText(QCoreApplication::translate("MainLoja", "Incluir DVD...", nullptr));
        Label_Livros->setText(QCoreApplication::translate("MainLoja", "LIVROS", nullptr));
        Label_CDs->setText(QCoreApplication::translate("MainLoja", "CDs", nullptr));
        Label_DVD->setText(QCoreApplication::translate("MainLoja", "DVDs", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Livros->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainLoja", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Livros->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainLoja", "Pre\303\247o", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Livros->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainLoja", "Autor", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_CD->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainLoja", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_CD->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainLoja", "Pre\303\247o", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_CD->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainLoja", "N\302\272 Faixas", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_DVD->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainLoja", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_DVD->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainLoja", "Pre\303\247o", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_DVD->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainLoja", "Dura\303\247\303\243o", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainLoja", "Arquivo", nullptr));
        menuItem->setTitle(QCoreApplication::translate("MainLoja", "Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainLoja: public Ui_MainLoja {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINLOJA_H
