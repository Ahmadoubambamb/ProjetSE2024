/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGenerer;
    QAction *actionQuitter;
    QAction *actionFIFO;
    QAction *actionPCTE;
    QAction *actionPCTER;
    QAction *actionTOURNIQUET;
    QAction *actionComparer;
    QAction *actionTableaux;
    QWidget *centralWidget;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuAlgorithme;
    QMenu *menuTableau;
    QMenu *menuCourbe;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(892, 488);
        actionGenerer = new QAction(MainWindow);
        actionGenerer->setObjectName(QStringLiteral("actionGenerer"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        actionFIFO = new QAction(MainWindow);
        actionFIFO->setObjectName(QStringLiteral("actionFIFO"));
        actionPCTE = new QAction(MainWindow);
        actionPCTE->setObjectName(QStringLiteral("actionPCTE"));
        actionPCTER = new QAction(MainWindow);
        actionPCTER->setObjectName(QStringLiteral("actionPCTER"));
        actionTOURNIQUET = new QAction(MainWindow);
        actionTOURNIQUET->setObjectName(QStringLiteral("actionTOURNIQUET"));
        actionComparer = new QAction(MainWindow);
        actionComparer->setObjectName(QStringLiteral("actionComparer"));
        actionTableaux = new QAction(MainWindow);
        actionTableaux->setObjectName(QStringLiteral("actionTableaux"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, -10, 851, 271));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 892, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuAlgorithme = new QMenu(menuBar);
        menuAlgorithme->setObjectName(QStringLiteral("menuAlgorithme"));
        menuTableau = new QMenu(menuBar);
        menuTableau->setObjectName(QStringLiteral("menuTableau"));
        menuCourbe = new QMenu(menuBar);
        menuCourbe->setObjectName(QStringLiteral("menuCourbe"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuAlgorithme->menuAction());
        menuBar->addAction(menuTableau->menuAction());
        menuBar->addAction(menuCourbe->menuAction());
        menuMenu->addAction(actionGenerer);
        menuMenu->addAction(actionQuitter);
        menuAlgorithme->addAction(actionFIFO);
        menuAlgorithme->addAction(actionPCTE);
        menuAlgorithme->addAction(actionPCTER);
        menuAlgorithme->addAction(actionTOURNIQUET);
        menuTableau->addAction(actionComparer);
        menuTableau->addAction(actionTableaux);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionGenerer->setText(QApplication::translate("MainWindow", "generer", 0));
        actionQuitter->setText(QApplication::translate("MainWindow", "quitter", 0));
        actionFIFO->setText(QApplication::translate("MainWindow", "FIFO", 0));
        actionPCTE->setText(QApplication::translate("MainWindow", "PCTE", 0));
        actionPCTER->setText(QApplication::translate("MainWindow", "PCTER", 0));
        actionTOURNIQUET->setText(QApplication::translate("MainWindow", "TOURNIQUET", 0));
        actionComparer->setText(QApplication::translate("MainWindow", "courbe", 0));
        actionTableaux->setText(QApplication::translate("MainWindow", "tableaux", 0));
        menuMenu->setTitle(QApplication::translate("MainWindow", "menu", 0));
        menuAlgorithme->setTitle(QApplication::translate("MainWindow", "algorithme", 0));
        menuTableau->setTitle(QApplication::translate("MainWindow", "comparer", 0));
        menuCourbe->setTitle(QApplication::translate("MainWindow", "aide", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
