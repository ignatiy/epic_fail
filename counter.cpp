#include<Counter.h>

Counter::Counter():QObject(),m_nValue(0)
{

}

void Counter::slotInc()
{
    emit countChanged(++m_nValue);
    if (m_nValue==10000)
    {
        emit goodbye();
    }
}
