/********************************************************************************
** Form generated from reading UI file 'aboutddiag.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDDIAG_H
#define UI_ABOUTDDIAG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_aboutddiag
{
public:

    void setupUi(QDialog *aboutddiag)
    {
        if (aboutddiag->objectName().isEmpty())
            aboutddiag->setObjectName(QStringLiteral("aboutddiag"));
        aboutddiag->resize(400, 300);

        retranslateUi(aboutddiag);

        QMetaObject::connectSlotsByName(aboutddiag);
    } // setupUi

    void retranslateUi(QDialog *aboutddiag)
    {
        aboutddiag->setWindowTitle(QApplication::translate("aboutddiag", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class aboutddiag: public Ui_aboutddiag {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDDIAG_H
