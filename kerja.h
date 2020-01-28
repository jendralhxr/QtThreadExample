#ifndef KERJA_H
#define KERJA_H

#include <QObject>
#include <QThread>

class kerja : public QThread
{
    Q_OBJECT
public:
    explicit kerja(QThread *parent = nullptr);
    void sometime();
    void someday();

signals:

public slots:
    void setTask(int val);

private:
    void run();
    int task;

};

#endif // KERJA_H
