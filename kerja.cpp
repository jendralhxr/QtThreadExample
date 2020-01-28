#include "kerja.h"
#include <QDateTime>

kerja::kerja(QThread *parent) : QThread(parent)
{
}

void kerja::sometime(){
    qDebug("time %s", QDateTime::currentDateTime().time().toString().toUtf8().constData());
    QThread::sleep(2);
}

void kerja::someday(){
    qDebug("date %s", QDateTime::currentDateTime().date().toString().toUtf8().constData());
    QThread::sleep(5);
}

void kerja::run(){
    while(1) {
        switch (task){
        case 1: sometime(); break;
        case 2: someday(); break;
        default: break;
        }

    }
}
void kerja::setTask(int val){
    task= val;
}
