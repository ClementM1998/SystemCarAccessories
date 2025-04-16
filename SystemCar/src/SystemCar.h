
/* 
 * Header: SystemCar.h
 *
 * Ini adalah perpustakaan SystemCar untuk kegunaan aksesori kenderaan.
 * Gunakan Arduino Mega untuk papan litar kawalan
 */

#ifndef SystemCar_h
#define SystemCar_h

#include "Defs.h"

#include <Arduino.h>
#include <SoftwareSerial.h>

class SystemCar {
  private:
  int _rxPin;
  int _txPin;
  SoftwareSerial *_serial; // pointer sebab SoftwareSerial perlu dibuat secara dinamik
  
  public:
  SystemCar(); // rxPin = 18 , txPin = 19
  SystemCar(int rxPin, int txPin);
  
  void begin();
  void begin(long baud);
  int availableSerial();
  int availableSystemCar();
  void flush();
  void end();
  
  String readLineSystemCar(); // Membaca satu baris data (contoh: satu string penuh)
  
};

#endif
