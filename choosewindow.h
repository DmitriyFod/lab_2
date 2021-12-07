#ifndef CHOOSEWINDOW_H
#define CHOOSEWINDOW_H

#include <QDialog>

namespace Ui {
class choosewindow;
}

class choosewindow : public QDialog
{
    Q_OBJECT

public:
    explicit choosewindow(QWidget *parent = nullptr);
    ~choosewindow();

private slots:
    void on_AddButton_clicked();

    void on_CancelButton_clicked();

private:
    Ui::choosewindow *ui;
};

#endif // CHOOSEWINDOW_H
