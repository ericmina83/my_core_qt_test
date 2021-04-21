#include "MyThreadTest2.h"

#include <QDebug>
#include <QThread>

MyThreadTest2::MyThreadTest2()
{
    connect(&timer, SIGNAL(timeout()), this, SLOT(handleTimer()));

    timer.start(1000);
}

MyThreadTest2::~MyThreadTest2()
{
}

void MyThreadTest2::handleTimer()
{
    qDebug() << "MyThreadTest2 thread id:" << QThread::currentThreadId();
}