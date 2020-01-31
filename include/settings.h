#define version "1.0.0"

namespace CONFIG {

    const uint8_t LED_PIN = 13;
    const uint16_t PERIOD = 100;
    
    void init(){
        pinMode(LED_PIN, OUTPUT);
    }
}
