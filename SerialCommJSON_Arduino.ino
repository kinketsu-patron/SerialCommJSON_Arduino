#include <Arduino.h>

void setup(void)
{
    Serial.begin(9600);
}

void loop(void)
{
    unsigned long second;
    String message;

    message = "It's passed ";
    second = millis() / 1000;
    message.concat(second);
    message.concat(" second.");
    Serial.println(message.c_str());
    delay(1000);
}
