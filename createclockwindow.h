#ifndef CREATECLOCKWINDOW_H
#define CREATECLOCKWINDOW_H

#include <QDialog>

namespace Ui {
class createclockwindow;
}

class createclockwindow : public QDialog
{
    Q_OBJECT

public:
    explicit createclockwindow(QWidget *parent = nullptr);
    ~createclockwindow();

private slots:
    void on_CancelButton_clicked();

    void on_AddButton_clicked();

private:
    Ui::createclockwindow *ui;
};

#endif // CREATECLOCKWINDOW_H
