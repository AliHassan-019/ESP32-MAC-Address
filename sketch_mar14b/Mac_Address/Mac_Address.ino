#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup() {
    Serial.begin(115200);

    delay(1000);  

    SerialBT.begin("ESP32_BT");  
    delay(1000);  

    uint8_t mac[6];
    SerialBT.getBtAddress(mac);  

    Serial.print("Bluetooth MAC Address: ");
    for (int i = 0; i < 6; i++) {
        Serial.printf("%02X", mac[i]);
        if (i < 5) Serial.print(":");  
    }
    Serial.println();
}

void loop() {
}
