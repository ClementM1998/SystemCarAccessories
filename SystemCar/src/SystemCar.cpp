
/*
 * Source: SystemCar.cpp
 */

#include "Defs.h"
#include "SystemCar.h"

SystemCar::SystemCar() {
    _rxPin = RXPIN;
    _txPin = TXPIN;
    _serial = new SoftwareSerial(_rxPin, _txPin);
}

SystemCar::SystemCar(int rxPin, int txPin) {
    _rxPin = rxPin;
    _txPin = txPin;
    _serial = new SoftwareSerial(_rxPin, _txPin);
}

void SystemCar::begin() {
    Serial.begin(BAUDSPEED);
    _serial->begin(BAUDSPEED);
}

void SystemCar::begin(long baud) {
    Serial.begin(baud);
    _serial->begin(baud);
}

int SystemCar::availableSerial() {
    return Serial.available();
}

int SystemCar::availableSystemCar() {
    return _serial->available();
}

void SystemCar::flush() {
    Serial.flush();
    _serial->flush();
}

void SystemCar::end() {
    Serial.end();
    _serial->end();
    delete _serial;
    _serial = nullptr;
}

String SystemCar::readLineSystemCar() {
    String line = "";
    char ch;
    while (availableSystemCar()) {
        ch = _serial->read();          // Baca satu karakter
        if (ch == '\n') break;         // Berhenti apabila mencapai newline
        line += ch;                    // Tambah karakter ke dalam String
    }
    return line;
}
