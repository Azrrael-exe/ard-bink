#include <Arduino.h>
#include <settings.h>

long led_timer = millis();
bool led_state = false;


void setup(){
    CONFIG::init();
    Serial.begin(115200);
}

void loop(){
    if(millis() - led_timer > CONFIG::PERIOD){
        led_timer = millis();
        led_state = !led_state;
        digitalWrite(CONFIG::LED_PIN, led_state);
        Serial.println(led_state);
    }
}
