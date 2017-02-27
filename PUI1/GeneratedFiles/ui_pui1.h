/********************************************************************************
** Form generated from reading UI file 'pui1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUI1_H
#define UI_PUI1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PUI1Class
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PUI1Class)
    {
        if (PUI1Class->objectName().isEmpty())
            PUI1Class->setObjectName(QStringLiteral("PUI1Class"));
        PUI1Class->resize(600, 400);
        centralWidget = new QWidget(PUI1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PUI1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PUI1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        PUI1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PUI1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PUI1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PUI1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PUI1Class->setStatusBar(statusBar);

        retranslateUi(PUI1Class);

        QMetaObject::connectSlotsByName(PUI1Class);
    } // setupUi

    void retranslateUi(QMainWindow *PUI1Class)
    {
        PUI1Class->setWindowTitle(QApplication::translate("PUI1Class", "PUI1", 0));
    } // retranslateUi

};

namespace Ui {
    class PUI1Class: public Ui_PUI1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUI1_H
