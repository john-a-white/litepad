/*
 * Copyright (C) 2009  Lorenzo Bettini <http://www.lorenzobettini.it>
 * See COPYING file that comes with this distribution
 */

#include <QtGui>
#include <QTextCodec>
#include <QFile>
#include <QFileDialog>
#include <QFontDialog>
#include <QString>
#include <QMessageBox>

#include "aboutdiag.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "finddialog.h"
#include "findreplacedialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_findDialog = new FindDialog(this);
    m_findDialog->setModal(false);
    m_findDialog->setTextEdit(ui->textEdit);

    m_findReplaceDialog = new FindReplaceDialog(this);
    m_findReplaceDialog->setModal(false);
    m_findReplaceDialog->setTextEdit(ui->textEdit);

    lFileName = "Untitled ";

    ui->textEdit->setStyleSheet("background : #ffffff; color : #000000"); //Fix strange issue under Windows 10 where the Style Sheet does not get set automatically.

    createActions();

    readSettings();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createActions() {
    connect(ui->actionFind, SIGNAL(triggered()), this, SLOT(findDialog()));
    connect(ui->actionReplace, SIGNAL(triggered()), this, SLOT(findReplaceDialog()));

    connect(ui->actionAboutQt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));

    connect(ui->actionFindNext, SIGNAL(triggered()), m_findDialog, SLOT(findNext()));
    connect(ui->actionFindPrevious, SIGNAL(triggered()), m_findDialog, SLOT(findPrev()));
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::findDialog() {
    m_findDialog->show();
}

void MainWindow::findReplaceDialog() {
    m_findReplaceDialog->show();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    writeSettings();
    event->accept();
}

void MainWindow::writeSettings() {
    QSettings settings("QtFindReplaceDialog", "QtFindReplaceDialogExample");
    m_findDialog->writeSettings(settings);
    m_findReplaceDialog->writeSettings(settings);
}

void MainWindow::readSettings() {
    QSettings settings("QtFindReplaceDialog", "QtFindReplaceDialogExample");
    m_findDialog->readSettings(settings);
    m_findReplaceDialog->readSettings(settings);
}

void MainWindow::on_actionNew_triggered()
{
    QMessageBox::StandardButton reply;
     reply = QMessageBox::question(this, "LitePad", "Do you want to save the changes made to " + lFileName + "?", QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
     if (reply == QMessageBox::Yes)
     {
        on_actionSave_As_triggered();
        ui->textEdit->setPlainText("");
        lFileName = "Untitled ";
        ResetTitle();
     }
     if (reply == QMessageBox::No)
     {
         ui->textEdit->setPlainText("");
         lFileName = "Untitled ";
         ResetTitle();
     }
     else
     {
         //nothing at all! :)
     }
}

void MainWindow::on_actionOpen_triggered()
{
    sFile = QFileDialog::getOpenFileName(this, tr("Open Document"),"");
    if(!sFile.isEmpty())
    {
        QFile file(sFile);
        if (file.open(QFile::ReadOnly | QFile::Text))
        {
            AskToSave();
            lFileName = sFile;
            ui->textEdit->setPlainText(QString::fromUtf8(file.readAll()));
            ResetTitle();
            this->setWindowTitle(lFileName + "- LitePad v0.01");
        }
    }
}

void MainWindow::on_actionSave_triggered()
{
    if (sFile.isEmpty()){
        sFile = QFileDialog::getSaveFileName(this, "Save Document", QString(), "All Files (*.*)");
    }
      QFileInfo info(sFile);
      if (info.suffix().isEmpty())
          sFile+=".txt";

      QFile file(sFile);
      if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
              return;
      file.write(ui->textEdit->toPlainText().toUtf8());
      file.close();
      ResetTitle();
  }

void MainWindow::on_actionSave_As_triggered()
{
    sFile = QFileDialog::getSaveFileName(this, tr("Save Document"),"");
    if(!sFile.isEmpty())
    {
        lFileName = sFile;
        on_actionSave_triggered();
    }
}

void MainWindow::on_actionExit_triggered()
{
    QMessageBox::StandardButton reply;
     reply = QMessageBox::question(this, "LitePad", "Do you want to save the changes made to " + lFileName + "?", QMessageBox::Yes|QMessageBox::No);
     if (reply == QMessageBox::Yes)
     {
        on_actionSave_As_triggered();
        this->close();
     }
     else
     {
        this->close();
     }
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionCopy_triggered()
{

    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{

    ui->textEdit->paste();
}

void MainWindow::on_actionDelete_All_Text_triggered()
{
    on_actionNew_triggered();
}

void MainWindow::on_actionSelect_All_triggered()
{
    ui->textEdit->selectAll();
}


void MainWindow::on_actionFont_triggered()
{
    QTextCursor c = ui->textEdit->textCursor();
    QTextCharFormat format = c.charFormat();
    QFont f = format.font();

    bool ok;
    QFont fontyour = QFontDialog::getFont(&ok,f,0);
    if (ok)
    {

    format.setFont(fontyour);
    c.setCharFormat(format);

    }
}

void MainWindow::on_actionAbout_triggered()
{
    aboutdiag *about = new aboutdiag();

    about->show();
}

//events

void MainWindow::on_textEdit_textChanged()
{
     this->setWindowTitle("*" + lFileName + "- LitePad v0.01");
}

//bools

bool MainWindow::ResetTitle()
{
    this->setWindowTitle(lFileName + "- LitePad v0.01");
}

bool MainWindow::AskToSave()
{
    QMessageBox::StandardButton reply;
     reply = QMessageBox::question(this, "LitePad", "Do you want to save the changes made to " + lFileName + "?", QMessageBox::Yes|QMessageBox::No);
     if (reply == QMessageBox::Yes)
     {
        on_actionSave_As_triggered();
     }
     else
     {

     }
}
