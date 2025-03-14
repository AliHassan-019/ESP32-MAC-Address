#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup() {
    Serial.begin(115200);


    \
    
    delay(1000);  // Wait for Serial Monitor to open

    SerialBT.begin("ESP32_BT");  // Start Bluetooth with a device name
    delay(1000);  // Allow Bluetooth to initialize

    uint8_t mac[6];
    SerialBT.getBtAddress(mac);  // Retrieve the MAC address

    Serial.print("Bluetooth MAC Address: ");
    for (int i = 0; i < 6; i++) {
        Serial.printf("%02X", mac[i]);
        if (i < 5) Serial.print(":");  // Add colons between bytes
    }
    Serial.println();
}

void loop() {
}
