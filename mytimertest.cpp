#include "mytimertest.h"

#include <QDebug>
#include <iostream>
#include <QThread>

MyTimerTest::MyTimerTest(QObject *parent) : QObject(parent)
{
    connect(&timer, SIGNAL(timeout()), this, SLOT(handleTimer()));

    timer.start(33);
}

void MyTimerTest::handleTimer()
{
    static int i = 0;
    qDebug() << "MyTimerTest" << i++ << "thread id:" << QThread::currentThreadId();

    // std::string haha;
    // std::cin >> haha;
    // std::cout << haha << std::endl;
}
