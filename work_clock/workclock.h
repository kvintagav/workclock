#ifndef WORKCLOCK_H
#define WORKCLOCK_H

#define startmin 20
#define stopmin 15

#include "inputdialog.h"
#include <QWidget>
#include <QLCDNumber>

namespace Ui {
class workclock;
}

class workclock : public QWidget
{
    Q_OBJECT
    
public:
    explicit workclock(QWidget *parent = 0);
    ~workclock();
    
    int value;
    bool works;
    int setminute;
private:
    Ui::workclock *ui;

private slots:

    void showTime();


    void on_start_clicked();

    void on_stopButton_clicked();

    void on_resetButton_clicked();

signals:

};

#endif // WORKCLOCK_H
