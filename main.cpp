#include "mytimertest.h"
#include "MyThreadTest1.h"
#include "MyThreadTest2.h"

#include <QCoreApplication>
#include <QTimer>
#include <QThread>
#include <QDebug>
#include <unistd.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // timer
    QTimer timer;
    QObject::connect(&timer, &QTimer::timeout, []() {
        qDebug() << "main thread thread id:" << QThread::currentThreadId();
    });
    timer.start(1000);

    MyThreadTest1 thread1;
    QObject::connect(&thread1, &MyThreadTest1::signal_test, []() {
        qDebug() << "MyThreadTest1 signal_test thread id:" << QThread::currentThreadId();
    });
    thread1.start();

    MyThreadTest2 myThreadTest2;
    QThread thread2;
    myThreadTest2.moveToThread(&thread2);
    thread2.start();

    return a.exec();
}
