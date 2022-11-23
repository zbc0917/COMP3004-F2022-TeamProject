#include "controlsys.h"

Controlsys::Controlsys()
{

}

Controlsys::~Controlsys()
{

}

bool Controlsys::getPower(){
    return isPowerOn;
}
int Controlsys::getStepNum(){
    return stepNum;
}
bool Controlsys::getIsRecord(){
    return isRecord;
}
