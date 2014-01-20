#ifndef COUNTER_H
#define COUNTER_H

class counter : public QObject {
    Q_OBJECT

private:
    int Value;
public:
    counter();
public slots:
    void slotStart();
    void slotStop();
    void slotReset();
signals:
    void counterChange(int);
    void status();

};


#endif // COUNTER_H
