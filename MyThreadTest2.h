#include <QObject>
#include <QTimer>

class MyThreadTest2 : public QObject
{
    Q_OBJECT
private:
    QTimer timer;

public:
    MyThreadTest2(/* args */);
    ~MyThreadTest2();

private slots:
    void handleTimer();
};
