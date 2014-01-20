#ifndef WORKCLOCK_H
#define WORKCLOCK_H

#include <QWidget>

namespace Ui {
class workclock;
}

class workclock : public QWidget
{
    Q_OBJECT
    
public:
    explicit workclock(QWidget *parent = 0);
    ~workclock();
    
private:
    Ui::workclock *ui;
};

#endif // WORKCLOCK_H
