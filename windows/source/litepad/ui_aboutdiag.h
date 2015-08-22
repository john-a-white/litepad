/********************************************************************************
** Form generated from reading UI file 'aboutdiag.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIAG_H
#define UI_ABOUTDIAG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_aboutdiag
{
public:
    QGroupBox *groupBox;
    QPlainTextEdit *plainTextEdit;
    QLabel *lblProgramName;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *litepadImage;

    void setupUi(QDialog *aboutdiag)
    {
        if (aboutdiag->objectName().isEmpty())
            aboutdiag->setObjectName(QStringLiteral("aboutdiag"));
        aboutdiag->resize(352, 413);
        groupBox = new QGroupBox(aboutdiag);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 180, 321, 151));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 20, 301, 121));
        plainTextEdit->setReadOnly(true);
        lblProgramName = new QLabel(aboutdiag);
        lblProgramName->setObjectName(QStringLiteral("lblProgramName"));
        lblProgramName->setGeometry(QRect(130, 30, 161, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        lblProgramName->setFont(font);
        pushButton = new QPushButton(aboutdiag);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 340, 301, 31));
        label_4 = new QLabel(aboutdiag);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 150, 121, 21));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_5 = new QLabel(aboutdiag);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 380, 301, 16));
        label_2 = new QLabel(aboutdiag);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 110, 181, 21));
        label = new QLabel(aboutdiag);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 70, 181, 31));
        label_3 = new QLabel(aboutdiag);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 130, 91, 21));
        litepadImage = new QLabel(aboutdiag);
        litepadImage->setObjectName(QStringLiteral("litepadImage"));
        litepadImage->setGeometry(QRect(20, 20, 96, 96));
        litepadImage->setTextFormat(Qt::PlainText);

        retranslateUi(aboutdiag);

        QMetaObject::connectSlotsByName(aboutdiag);
    } // setupUi

    void retranslateUi(QDialog *aboutdiag)
    {
        aboutdiag->setWindowTitle(QApplication::translate("aboutdiag", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("aboutdiag", "About LitePad", 0));
        plainTextEdit->setPlainText(QApplication::translate("aboutdiag", "LitePad is an open-source lightweight text editing utility designed for comfortable use by newbies and pros alike. It is designed to be very lightweight (to use as little dependencies as possible). It is also designed to mimic the default Microsoft Windows Notepad.\n"
"\n"
"Coded in C++ with Qt Creator by John A. White for Microsoft Windows, Linux, and Mac OS X.\n"
"\n"
"https://github.com/john-a-white/litepad", 0));
        lblProgramName->setText(QApplication::translate("aboutdiag", "LitePad v0.01", 0));
        pushButton->setText(QApplication::translate("aboutdiag", "Got It", 0));
        label_4->setText(QApplication::translate("aboutdiag", "x86 edition", 0));
        label_5->setText(QApplication::translate("aboutdiag", "<html><head/><body><p>Compile Date: 8/20/2015 1:02 AM EST (USA)</p></body></html>", 0));
        label_2->setText(QApplication::translate("aboutdiag", "By Servo Software, Inc.", 0));
        label->setText(QApplication::translate("aboutdiag", "The open-source lightweight \n"
"text editing utility!", 0));
        label_3->setText(QApplication::translate("aboutdiag", "Build 106", 0));
        litepadImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class aboutdiag: public Ui_aboutdiag {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIAG_H
