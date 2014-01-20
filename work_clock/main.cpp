#include <QtGui/QApplication>
#include "workclock.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    workclock work;
    work.show();
    
    QObject::connect(&work, SIGNAL(start.clicked()),
                     &counter, SLOT(start())
                    );

    return app.exec();
}
