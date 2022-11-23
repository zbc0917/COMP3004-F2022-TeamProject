#ifndef BATTERY_H
#define BATTERY_H

#include <stdio.h>
#include <QMainWindow>
#include <QDebug>
#include <QTime>

class Battery : public QObject {
    Q_OBJECT

public:
    Battery();
    ~Battery();

    //getter and setter
    int getPower();
    void setPower();   //set to full

    //Functions
    //intensity 1-8
    void reducePower(int num);


private:
    int power;

//public slots:

//signals:

};

#endif // BATTERY_H
