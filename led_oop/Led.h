#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led 
{
private:
  byte pin;
public:
  Led() {} // do not use!!!!!!!!!!!!!!!!!!!!!!!!!!!
  Led(byte pin);

  // init the pin for the LED
  // call this in setup()
  void init();
  void init(byte defaultState);

  // ons and off, obvious lol
  void on();
  void off();

};

#endif