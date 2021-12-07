#ifndef DONOTDISTURBINFOWINDOW_H
#define DONOTDISTURBINFOWINDOW_H

#include <QDialog>

namespace Ui {
class donotdisturbinfowindow;
}

class donotdisturbinfowindow : public QDialog
{
    Q_OBJECT

public:
    explicit donotdisturbinfowindow(QWidget *parent = nullptr);
    ~donotdisturbinfowindow();

private:
    Ui::donotdisturbinfowindow *ui;
};

#endif // DONOTDISTURBINFOWINDOW_H
