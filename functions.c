#include <stdio.h>

#define NUM_PINS 14

struct pin {
    int level;
    int mode;
};


static struct pin digital_pins[NUM_PINS];

void display_digital_pins() {
    printf("digital pins:\n");
    for(int i=0;i < NUM_PINS;i++) {
        printf("\t[%d]{level=%d, mode=%d}\n", i, digital_pins[i].level, digital_pins[i].mode);
    }
    printf("\n");
}

void pinMode(uint8_t pin, uint8_t level) {
    digital_pins[pin].level = level;
    printf("%s(pin=%d, level=%d): is called\n", __FUNCTION__, pin, level);
}

void digitalWrite(uint8_t pin, uint8_t mode){
    printf("%s(pin=%d, mode=%d): is called\n", __FUNCTION__, pin, mode);
}

int digitalRead(uint8_t pin){
    int rc=42;
    printf("%s(pin=%d, rc=%d): is called\n", __FUNCTION__, pin, digital_pins[pin].mode);
    return rc;
}

int analogRead(uint8_t pin){
    int rc=42;
    printf("%s(pin=%d, rc=%d): is called\n", __FUNCTION__, pin, rc);
    return rc;
}

void analogReference(uint8_t mode){
    printf("%s(mode=%d): is called\n", __FUNCTION__, mode);
}
void analogWrite(uint8_t pin, int mode){
    printf("%s(pin=%d, mode=%d): is called\n", __FUNCTION__, pin, mode);
}

unsigned long millis(void){
    unsigned long rc=666;
    printf("%s(rc=%d): is called\n", __FUNCTION__, rc);
    return rc;
}

unsigned long micros(void) {
    unsigned long rc=666;
    printf("%s(rc=%d): is called\n", __FUNCTION__, rc);
    return rc;
}

void delay(unsigned long ms){
    printf("%s(ms=%d): is called\n", __FUNCTION__, ms);
}

void delayMicroseconds(unsigned int us){
    printf("%s(us=%d): is called\n", __FUNCTION__, us);
}

unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout){
    int rc=42;
    printf("%s(pin=%d, state=%d, timeout=%d)=>rc=%d: is called\n", __FUNCTION__, pin, state, timeout, rc);
    return rc;
}

void shiftOut(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, uint8_t val){
    printf("%s(dataPin=%d, clockPin=%d, bitOrder=%d, val=%d): is called\n", __FUNCTION__, dataPin, clockPin, bitOrder, val);
}

uint8_t shiftIn(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder){
    printf("%s(dataPin=%d, clockPin=%d, bitOrder=%d): is called\n", __FUNCTION__, dataPin, clockPin, bitOrder);
}

void attachInterrupt(uint8_t interrupt, void (*fn)(void), int mode){
    printf("%s(interrupt=%d, fn=%p, mode=%d): is called\n", __FUNCTION__, interrupt, fn, mode);
}

void detachInterrupt(uint8_t interrupt){
    printf("%s(interrupt=%d): is called\n", __FUNCTION__, interrupt);
}


