#include "mytimertest.h"

#include <QCoreApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyTimerTest myTimerTest;

    return a.exec();
}
