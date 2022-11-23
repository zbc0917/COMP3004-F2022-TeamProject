#ifndef CONTROLSYS_H
#define CONTROLSYS_H

#include <QMainWindow>
#include <QDebug>
#include <QTime>

#include "battery.h"
#include "users.h"
#include "screen.h"
#include "earClips.h"


class Controlsys : public QObject {
    Q_OBJECT

public:
    Controlsys();
    ~Controlsys();

    //getter and setter
    bool getPower();
    int getStepNum();
    bool getIsRecord();


    void changePowerStatus();
    void earConnectStatus(int i, bool b);

private:
    Record* recordList[20];
    int stepNum;
    bool isPowerOn;
    bool isRecord;
    Battery *battery;
    Screen *screen;
    EarClips *earclips;
    Record *record;


//public slots:

signals:


};

#endif // CONTROLSYS_H
