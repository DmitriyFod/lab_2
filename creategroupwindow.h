#ifndef CREATEGROUPWINDOW_H
#define CREATEGROUPWINDOW_H

#include <QDialog>

namespace Ui {
class creategroupwindow;
}

class creategroupwindow : public QDialog
{
    Q_OBJECT

public:
    explicit creategroupwindow(QWidget *parent = nullptr);
    ~creategroupwindow();

private:
    Ui::creategroupwindow *ui;
};

#endif // CREATEGROUPWINDOW_H
