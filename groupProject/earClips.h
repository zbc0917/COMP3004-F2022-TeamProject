#ifndef EARCLIPS_H
#define EARCLIPS_H

#include <QMainWindow>
#include <QDebug>
#include <QTime>

class EarClips : public QObject {
    Q_OBJECT

public:
    EarClips();
    ~EarClips();

    //getter and setter
    bool getLeft();
    bool getRight();

    void setLeft(bool b);
    void setRight(bool b);

private:
    //true is connected, false is not connected
    bool isLeft;
    bool isRight;

//public slots:

//signals:

};

#endif // EARCLIPS_H
