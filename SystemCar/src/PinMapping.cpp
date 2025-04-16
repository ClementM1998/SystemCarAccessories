
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
    
}
