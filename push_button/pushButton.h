#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H

#include <Arduino.h>

class pushButton
{
private:
    byte pin;
public:
    pushButton() {} //dont use idiot
    pushButton(byte pin);

    //initiailsisie the pins
    void init();
    void init(byte readState);
};

#endif