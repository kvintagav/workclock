

Counter::Counter() : QObject()
, Value(0)
{
}
void Counter::slotInc()
{
    emit counterChanged(++m_nValue);

    if (m_nValue == 5) {
        emit goodbye();
    }
}
