
#include <SystemCar.h>

//SystemCar systemcar(RXPIN, TXPIN); // tetapkan rx = RXPIN, tx = TXPIN
//SystemCar systemcar(); // tetapan lalai rx = RXPIN, tx = TXPIN

SystemCar systemcar;

void setup() {
    systemcar.begin();
}

void loop() {
    if (systemcar.availableSystemCar() > 0) {
        // Baca satu baris data dari Bluetooth
        String line = systemcar.readLineSystemCar();
        
    }
}
