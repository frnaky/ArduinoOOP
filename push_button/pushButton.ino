#include "pushButton.h"

#define BUTTON_PIN 2 // maybe change to 7?

pushButton button(BUTTON_PIN, true, true);

void setup() {
    Serial.begin(115200);
    Serial.println("test");
    button.init();
}

void loop() {
    if (button.isPressed()) {
        Serial.println("button pressed");
    }
    else {
        Serial.println("button not pressed");
    }
    delay(100);
}