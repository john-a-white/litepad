#include "aboutdiag.h"
#include "ui_aboutdiag.h"

aboutdiag::aboutdiag(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutdiag)
{
    ui->setupUi(this);

    QPixmap mypix (":/litepad-96x96.png");
    ui->litepadImage->setPixmap(mypix);
}

aboutdiag::~aboutdiag()
{
    delete ui;
}

void aboutdiag::on_pushButton_clicked()
{
    this->close();
}
