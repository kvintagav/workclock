#include "workclock.h"
#include "ui_workclock.h"

workclock::workclock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::workclock)
{
    ui->setupUi(this);
}

workclock::~workclock()
{
    delete ui;
}
