#include <stdio.h>

void digitalWrite(int pin, int mode) {
    printf("%s(pin=%d, mode=%d): is called\n", __FUNCTION__, pin, mode);
}

void pinMode(int pin, int level) {
    printf("%s(pin=%d, mode=%d): is called\n", __FUNCTION__, pin, level);
}

void delay(int ms) {
    printf("%s(%d): is called\n", __FUNCTION__, ms);
}

