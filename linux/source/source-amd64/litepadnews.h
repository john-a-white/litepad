#ifndef LITEPADNEWS_H
#define LITEPADNEWS_H

#include <QMainWindow>

namespace Ui {
class litepadnews;
}

class litepadnews : public QMainWindow
{
    Q_OBJECT

public:
    explicit litepadnews(QWidget *parent = 0);
    ~litepadnews();

private:
    Ui::litepadnews *ui;
};

#endif // LITEPADNEWS_H
