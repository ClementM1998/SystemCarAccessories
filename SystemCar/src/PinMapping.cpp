
/*
 * Source: PinMapping.cpp
 */

#include <Arduino.h>
#include "Defs.h"
#include "PinMapping.h"

PinMapping::PinMapping() {}

void PinMapping::init() {
    /* IGPIN dan STARTPIN */
    pinMode(IGPIN, OUTPUT);
    pinMode(STARTPIN, OUTPUT);
    /* DOORLOCKPIN positif dan negatif */
    pinMode(DOORLOCKPIN_P, OUTPUT);
    pinMode(DOORLOCKPIN_N, OUTPUT);
    /* WINDOWMAIN positif dan negatif */
    pinMode(WINDOWMAIN_P, OUTPUT);
    pinMode(WINDOWMAIN_N, OUTPUT);
    /* WINDOWLEFT positif dan negatif */
    pinMode(WINDOWLEFT_P, OUTPUT);
    pinMode(WINDOWLEFT_N, OUTPUT);
    /* WINDOWREARRIGHT positif dan negatif */
    pinMode(WINDOWREARRIGHT_P, OUTPUT);
    pinMode(WINDOWREARRIGHT_N, OUTPUT);
    /* WINDOWREARLEFT positif dan negatif */
    pinMode(WINDOWREARLEFT_P, OUTPUT);
    pinMode(WINDOWREARLEFT_N, OUTPUT);
    /* HIGHLIGHTLEFT dan HIGHLIGHTRIGHT */
    pinMode(HIGHLIGHTLEFT, OUTPUT);
    pinMode(HIGHLIGHTRIGHT, OUTPUT);
    /* LOWLIGHTLEFT dan LOWLIGHTRIGHT */
    pinMode(LOWLIGHTLEFT, OUTPUT);
    pinMode(LOWLIGHTRIGHT, OUTPUT);
    /* FOGLIGHTLEFT dan FOGLIGHTRIGHT */
    pinMode(FOGLIGHTLEFT, OUTPUT);
    pinMode(FOGLIGHTRIGHT, OUTPUT);
    /* RUNNINGLIGHTLEFT dan RUNNINGLIGHTRIGHT */
    pinMode(RUNNINGLIGHTLEFT, OUTPUT);
    pinMode(RUNNINGLIGHTRIGHT, OUTPUT);
}

void PinMapping::turnOn(int pin) {
    digitalWrite(pin, HIGH);
}

void PinMapping::turnOff(int pin) {
    digitalWrite(pin, LOW);
}

void PinMapping::pulse(int pin, int value) {
    analogWrite(pin, value);
}
