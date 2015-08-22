#ifndef ABOUTDIAG_H
#define ABOUTDIAG_H

#include <QDialog>

namespace Ui {
class aboutdiag;
}

class aboutdiag : public QDialog
{
    Q_OBJECT

public:
    explicit aboutdiag(QWidget *parent = 0);
    ~aboutdiag();

private slots:
    void on_pushButton_clicked();

private:
    Ui::aboutdiag *ui;
};

#endif // ABOUTDIAG_H
