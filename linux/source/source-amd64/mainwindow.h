/*
 * Copyright (C) 2009  Lorenzo Bettini <http://www.lorenzobettini.it>
 * See COPYING file that comes with this distribution
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class FindDialog;
class FindReplaceDialog;

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);
    void closeEvent(QCloseEvent *event);

    void createActions();

    void writeSettings();
    void readSettings();

private slots:

    void findDialog();
    void findReplaceDialog();

    void on_actionOpen_triggered();

    void on_textEdit_textChanged();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionExit_triggered();

    void on_actionAurora_default_triggered();

    void on_actionMoon_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionDelete_All_Text_triggered();

    void on_actionNew_triggered();

    void on_actionAbout_triggered();

    void on_actionSelect_All_triggered();

    void on_actionFont_triggered();

private:
    Ui::MainWindow *ui;

    FindDialog *m_findDialog;
    FindReplaceDialog *m_findReplaceDialog;

    QString lFileName;
    QString sFile;

    bool ResetTitle();
    bool AskToSave();
};

#endif // MAINWINDOW_H
