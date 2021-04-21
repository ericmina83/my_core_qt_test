#include <QThread>

class MyThreadTest1 : public QThread
{
    Q_OBJECT
public:
    MyThreadTest1(/* args */);
    ~MyThreadTest1();

    void run() override;

signals:
    void signal_test();
};
