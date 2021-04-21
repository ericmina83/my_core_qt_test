#include "mytimertest.h"

#include <QDebug>
#include <iostream>

MyTimerTest::MyTimerTest(QObject *parent) : QObject(parent)
{
    connect(&timer, SIGNAL(timeout()), this, SLOT(handleTimer()));

    timer.start(33);
}

void MyTimerTest::handleTimer()
{
    static int i = 0;
    qDebug() << "haha: " << i++;

    std::string haha;
    std::cin >> haha;
    std::cout << haha << std::endl;
}
