#include "litepadnews.h"
#include "ui_litepadnews.h"

litepadnews::litepadnews(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::litepadnews)
{
    ui->setupUi(this);
}

litepadnews::~litepadnews()
{
    delete ui;
}
