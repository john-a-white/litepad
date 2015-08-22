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
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete_All_Text;
    QAction *actionSelect_All;
    QAction *actionFont;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_Find;
    QMenu *menu_Help;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 400);
        MainWindow->setMinimumSize(QSize(280, 140));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/litepad-96x96.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("background : #efefef; color : #000000; selection-background-color : #0055ef; selection-color: #ffffff;"));
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/litepad-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/litepad-about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon2);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionReplace = new QAction(MainWindow);
        actionReplace->setObjectName(QStringLiteral("actionReplace"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/litepad-find-replace.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReplace->setIcon(icon3);
        actionFindNext = new QAction(MainWindow);
        actionFindNext->setObjectName(QStringLiteral("actionFindNext"));
        actionFindNext->setIcon(icon1);
        actionFindPrevious = new QAction(MainWindow);
        actionFindPrevious->setObjectName(QStringLiteral("actionFindPrevious"));
        actionFindPrevious->setIcon(icon1);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/litepad_new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon4);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen->setCheckable(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/litepad_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon5);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/litepad_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon6);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionSave_As->setIcon(icon6);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/litepad-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon7);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/resources/litepad-undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon8);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/resources/litepad-redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon9);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/resources/litepad-cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon10);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/resources/litepad-copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon11);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/resources/litepad-paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon12);
        actionDelete_All_Text = new QAction(MainWindow);
        actionDelete_All_Text->setObjectName(QStringLiteral("actionDelete_All_Text"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/resources/litepad-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_All_Text->setIcon(icon13);
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QStringLiteral("actionSelect_All"));
        actionSelect_All->setIcon(icon12);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName(QStringLiteral("actionFont"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/resources/litepad-font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon14);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QStringLiteral("background : #ffffff; color : #000000"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menu_Find = new QMenu(menuBar);
        menu_Find->setObjectName(QStringLiteral("menu_Find"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuFormat = new QMenu(menuBar);
        menuFormat->setObjectName(QStringLiteral("menuFormat"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuFormat->menuAction());
        menuBar->addAction(menu_Find->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_Find->addAction(actionFind);
        menu_Find->addAction(actionReplace);
        menu_Find->addSeparator();
        menu_Find->addAction(actionFindNext);
        menu_Find->addAction(actionFindPrevious);
        menu_Help->addAction(actionAbout);
        menu_Help->addSeparator();
        menu_Help->addAction(actionAboutQt);
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete_All_Text);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuFormat->addAction(actionFont);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Untitled - LitePad v0.01", 0));
        actionFind->setText(QApplication::translate("MainWindow", "Find", 0));
#ifndef QT_NO_STATUSTIP
        actionFind->setStatusTip(QApplication::translate("MainWindow", "Search for a text string.", 0));
#endif // QT_NO_STATUSTIP
        actionFind->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About LitePad", 0));
#ifndef QT_NO_STATUSTIP
        actionAbout->setStatusTip(QApplication::translate("MainWindow", "Get information about the application.", 0));
#endif // QT_NO_STATUSTIP
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", 0));
#ifndef QT_NO_TOOLTIP
        actionAboutQt->setToolTip(QApplication::translate("MainWindow", "About Qt", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionAboutQt->setStatusTip(QApplication::translate("MainWindow", "Get information about Qt, the program used to code this program.", 0));
#endif // QT_NO_STATUSTIP
        actionReplace->setText(QApplication::translate("MainWindow", "Replace...", 0));
#ifndef QT_NO_STATUSTIP
        actionReplace->setStatusTip(QApplication::translate("MainWindow", "Replace a text string.", 0));
#endif // QT_NO_STATUSTIP
        actionReplace->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0));
        actionFindNext->setText(QApplication::translate("MainWindow", "Find Next", 0));
#ifndef QT_NO_STATUSTIP
        actionFindNext->setStatusTip(QApplication::translate("MainWindow", "Find the next occurrence.", 0));
#endif // QT_NO_STATUSTIP
        actionFindNext->setShortcut(QApplication::translate("MainWindow", "F3", 0));
        actionFindPrevious->setText(QApplication::translate("MainWindow", "Find Previous", 0));
#ifndef QT_NO_STATUSTIP
        actionFindPrevious->setStatusTip(QApplication::translate("MainWindow", "Find the previous occurrence.", 0));
#endif // QT_NO_STATUSTIP
        actionFindPrevious->setShortcut(QApplication::translate("MainWindow", "Shift+F3", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0));
#ifndef QT_NO_STATUSTIP
        actionNew->setStatusTip(QApplication::translate("MainWindow", "Create a new text document and discard the current one.", 0));
#endif // QT_NO_STATUSTIP
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
#ifndef QT_NO_STATUSTIP
        actionOpen->setStatusTip(QApplication::translate("MainWindow", "Open a new text document.", 0));
#endif // QT_NO_STATUSTIP
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
#ifndef QT_NO_STATUSTIP
        actionSave->setStatusTip(QApplication::translate("MainWindow", "Save the current text document.", 0));
#endif // QT_NO_STATUSTIP
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0));
#ifndef QT_NO_STATUSTIP
        actionSave_As->setStatusTip(QApplication::translate("MainWindow", "Save the current text document.", 0));
#endif // QT_NO_STATUSTIP
        actionSave_As->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow", "Exit", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionExit->setStatusTip(QApplication::translate("MainWindow", "Quit the application.", 0));
#endif // QT_NO_STATUSTIP
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0));
#ifndef QT_NO_STATUSTIP
        actionUndo->setStatusTip(QApplication::translate("MainWindow", "Undo the previous action.", 0));
#endif // QT_NO_STATUSTIP
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0));
#ifndef QT_NO_STATUSTIP
        actionRedo->setStatusTip(QApplication::translate("MainWindow", "Redo the previous action.", 0));
#endif // QT_NO_STATUSTIP
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0));
#ifndef QT_NO_STATUSTIP
        actionCut->setStatusTip(QApplication::translate("MainWindow", "Cut the current selection of text.", 0));
#endif // QT_NO_STATUSTIP
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0));
#ifndef QT_NO_STATUSTIP
        actionCopy->setStatusTip(QApplication::translate("MainWindow", "Copy the current selection of text.", 0));
#endif // QT_NO_STATUSTIP
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0));
#ifndef QT_NO_STATUSTIP
        actionPaste->setStatusTip(QApplication::translate("MainWindow", "Paste the contents of your clipboard.", 0));
#endif // QT_NO_STATUSTIP
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0));
        actionDelete_All_Text->setText(QApplication::translate("MainWindow", "Delete All Text", 0));
#ifndef QT_NO_STATUSTIP
        actionDelete_All_Text->setStatusTip(QApplication::translate("MainWindow", "Erase all of the text in the current document.", 0));
#endif // QT_NO_STATUSTIP
        actionSelect_All->setText(QApplication::translate("MainWindow", "Select All", 0));
#ifndef QT_NO_STATUSTIP
        actionSelect_All->setStatusTip(QApplication::translate("MainWindow", "Select all the text in the current document.", 0));
#endif // QT_NO_STATUSTIP
        actionSelect_All->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        actionFont->setText(QApplication::translate("MainWindow", "Font", 0));
#ifndef QT_NO_STATUSTIP
        actionFont->setStatusTip(QApplication::translate("MainWindow", "Change the current font of the selected text.", 0));
#endif // QT_NO_STATUSTIP
        actionFont->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+F", 0));
        menu_Find->setTitle(QApplication::translate("MainWindow", "Search", 0));
        menu_Help->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuFormat->setTitle(QApplication::translate("MainWindow", "Format", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
