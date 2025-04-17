
/*
 * Header: PinMapping.h
 */

#ifndef PinMapping_h
#define PinMapping_h

class PinMapping {
  public:
    PinMapping();
    void init();
    void turnOn(int pin);
    void turnOff(int pin);
    void pulse(int pin, int value);
};

#endif
