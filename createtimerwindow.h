#ifndef CREATETIMERWINDOW_H
#define CREATETIMERWINDOW_H

#include <QDialog>

namespace Ui {
class createtimerwindow;
}

class createtimerwindow : public QDialog
{
    Q_OBJECT

public:
    explicit createtimerwindow(QWidget *parent = nullptr);
    ~createtimerwindow();
private slots:
    void on_AddButton_clicked();

    void on_CancelButton_clicked();

private:
    Ui::createtimerwindow *ui;
};

#endif // CREATETIMERWINDOW_H
