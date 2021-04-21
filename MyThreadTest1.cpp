#include "MyThreadTest1.h"

#include <QDebug>
#include <unistd.h>

MyThreadTest1::MyThreadTest1(/* args */)
{
}

MyThreadTest1::~MyThreadTest1()
{
}

void MyThreadTest1::run()
{
    while (1)
    {
        emit signal_test();

        qDebug() << "MyThreadTest1 run thread id:" << QThread::currentThreadId();

        sleep(1);
    }
}