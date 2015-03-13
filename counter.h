#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter: public QObject
{
    Q_OBJECT
private:
    int m_nValue;
public:
    Counter();
public slots:
    void slotInc();
signals:
    void goodbye();
    void countChanged(int);
};
#endif // COUNTER_H
