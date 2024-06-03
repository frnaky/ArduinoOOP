#include "pushButton.h"

pushButton::pushButton(byte pin)
{
    this->pin = pin;
}

void pushButton::init()
{
    pinMode(pin, INPUT_PULLUP);
    readState();
}

byte pushButton::readState()
{
    state = digitalRead(pin);
    return state; 
}