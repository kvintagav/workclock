#include "workclock.h"
#include "ui_workclock.h"

#include <QtGui>

workclock::workclock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::workclock)
{
    ui->setupUi(this);

    value=startmin;
    works=false;
    QTime time = QTime::currentTime();
    setminute=time.second();
    //setminute=time.minute()
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(1000);

    showTime();
}

workclock::~workclock()
{
    delete ui;
}
void workclock::showTime()
{
     QTime time = QTime::currentTime();

     QString text = time.toString("hh:mm:ss");
     if ((time.second() % 2) == 0)

         text[2] = ' ';
     else
         text[5] = ' ';

     ui->time->display(text);
     if (works==true)
     {
         if (setminute!=time.second())
         {
            setminute=time.second();
            if (value!=0) value--;
         }
     }

    if (value==15)
    {int n = QMessageBox::warning(0,
      "Warning",
      "Pleaes Stop",
      QMessageBox::Yes | QMessageBox::No,
      QMessageBox::Yes
      );
         if (n == QMessageBox::Yes) {
      // Saving the changes!
      }
    }


    ui->workminut->display(value);

}



void workclock::on_start_clicked()
{
      works=true;
      if (value==0) value=startmin;
}

void workclock::on_stopButton_clicked()
{
     works=false;
}

void workclock::on_resetButton_clicked()
{
     value=startmin;
}
