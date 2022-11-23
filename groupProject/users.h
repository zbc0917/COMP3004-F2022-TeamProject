#ifndef USERS_H
#define USERS_H

#include <QMainWindow>
#include <QDebug>
#include <QTime>
#include "record.h"

class users
{
public:
    users();
    ~users();

private:
    Record* recordList[20];
};

#endif // USERS_H
