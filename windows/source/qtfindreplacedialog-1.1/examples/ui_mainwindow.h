/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFind;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionReplace;
    QAction *actionFindNext;
    QAction *actionFindPrevious;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_Find;
    QMenu *menu_Help;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 400);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionReplace = new QAction(MainWindow);
        actionReplace->setObjectName(QStringLiteral("actionReplace"));
        actionFindNext = new QAction(MainWindow);
        actionFindNext->setObjectName(QStringLiteral("actionFindNext"));
        actionFindPrevious = new QAction(MainWindow);
        actionFindPrevious->setObjectName(QStringLiteral("actionFindPrevious"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menu_Find = new QMenu(menuBar);
        menu_Find->setObjectName(QStringLiteral("menu_Find"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Find->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_Find->addAction(actionFind);
        menu_Find->addAction(actionReplace);
        menu_Find->addSeparator();
        menu_Find->addAction(actionFindNext);
        menu_Find->addAction(actionFindPrevious);
        menu_Help->addAction(actionAbout);
        menu_Help->addAction(actionAboutQt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Find/Replace Dialog Example", 0));
        actionFind->setText(QApplication::translate("MainWindow", "&Find...", 0));
#ifndef QT_NO_TOOLTIP
        actionFind->setToolTip(QApplication::translate("MainWindow", "Find menu", 0));
#endif // QT_NO_TOOLTIP
        actionFind->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "About this application", 0));
#endif // QT_NO_TOOLTIP
        actionAboutQt->setText(QApplication::translate("MainWindow", "About &Qt", 0));
#ifndef QT_NO_TOOLTIP
        actionAboutQt->setToolTip(QApplication::translate("MainWindow", "About Qt", 0));
#endif // QT_NO_TOOLTIP
        actionReplace->setText(QApplication::translate("MainWindow", "Replace...", 0));
#ifndef QT_NO_TOOLTIP
        actionReplace->setToolTip(QApplication::translate("MainWindow", "Opens the Find/Replace dialog", 0));
#endif // QT_NO_TOOLTIP
        actionReplace->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0));
        actionFindNext->setText(QApplication::translate("MainWindow", "Find &Next", 0));
#ifndef QT_NO_TOOLTIP
        actionFindNext->setToolTip(QApplication::translate("MainWindow", "Find next occurrence", 0));
#endif // QT_NO_TOOLTIP
        actionFindNext->setShortcut(QApplication::translate("MainWindow", "F3", 0));
        actionFindPrevious->setText(QApplication::translate("MainWindow", "Find &Previous", 0));
#ifndef QT_NO_TOOLTIP
        actionFindPrevious->setToolTip(QApplication::translate("MainWindow", "Find previous occurrence", 0));
#endif // QT_NO_TOOLTIP
        actionFindPrevious->setShortcut(QApplication::translate("MainWindow", "Shift+F3", 0));
        menu_Find->setTitle(QApplication::translate("MainWindow", "&Find", 0));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
