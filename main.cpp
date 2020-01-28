#include <QThread>
#include <QString>
#include <QApplication>
#include "kerja.h"
#include <QLabel>

int main(int argc, char **argv){
    QApplication a(argc, argv);


    QLabel tulis("abcde");
    tulis.setMinimumSize(200,100);
    tulis.show();

    kerja worker1; worker1.setTask(1);
    worker1.start();

    kerja worker2; worker2.setTask(2);
    worker2.start();

    return a.exec();
}
