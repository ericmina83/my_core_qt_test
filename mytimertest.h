#ifndef MYTIMERTEST_H
#define MYTIMERTEST_H

#include <QObject>
#include <QTimer>

class MyTimerTest : public QObject
{
    Q_OBJECT
private:
    QTimer timer;
public:
    explicit MyTimerTest(QObject *parent = nullptr);

signals:

private slots:
    void handleTimer();

};

#endif // MYTIMERTEST_H
