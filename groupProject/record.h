#ifndef RECORD_H
#define RECORD_H

#include <QMainWindow>
#include <QDebug>
#include <QTime>

class Record : public QObject {
    Q_OBJECT

public:
    Record(int t, int s, int i);
    ~Record();

    //getter and setter
    int getTime();
    int getSession();
    int getIntensity();

private:
    int time;
    int session;
    int intensity;

//public slots:

//signals:

};

#endif // RECORD_H
