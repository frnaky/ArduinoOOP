#define LED_PIN 13

#include "Led.h"

Led led(LED_PIN);

void setup() {
  Serial.begin(9600);;
  led.init();
}

void loop() {
  Serial.println("cool");
  led.on();
  delay(1000);
  led.off();
  delay(1000);
} 