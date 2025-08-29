#line 1 "C:\\Users\\hardw\\Documents\\FIRMWARE\\ESP32-S3\\ARDUINO\\USB_NATIVO_UARTS\\USB_NATIVO_UARTS.ino"
#include "Arduino.h"



#line 5 "C:\\Users\\hardw\\Documents\\FIRMWARE\\ESP32-S3\\ARDUINO\\USB_NATIVO_UARTS\\USB_NATIVO_UARTS.ino"
void setup();
#line 23 "C:\\Users\\hardw\\Documents\\FIRMWARE\\ESP32-S3\\ARDUINO\\USB_NATIVO_UARTS\\USB_NATIVO_UARTS.ino"
void loop();
#line 5 "C:\\Users\\hardw\\Documents\\FIRMWARE\\ESP32-S3\\ARDUINO\\USB_NATIVO_UARTS\\USB_NATIVO_UARTS.ino"
void setup() {
  // USB nativo CDC (si está habilitado por la placa en Arduino-ESP32)
  Serial.begin(115200);

  Serial0.begin(115200);

  // UART1 → pines por defecto o reconfigurados
  Serial1.begin(115200, SERIAL_8N1, 18, 17); // RX=18, TX=17 (ejemplo)

  // UART2 → pines por defecto o reconfigurados
  Serial2.begin(115200, SERIAL_8N1, 16, 15); // RX=16, TX=15 (ejemplo)

  Serial.println("USB CDC listo");
  Serial0.println("UART0 listo");
  Serial1.println("UART1 listo");
  Serial2.println("UART2 listo");
}

void loop() {
//   if (Serial.available()) {
//     int c = Serial.read();
//     Serial1.write(c); // eco a UART1
//     Serial2.write(c); // eco a UART2
//   }
    Serial.println("USB CDC listo loop 1");
    delay(1000); // Espera 1 segundo antes de repetir
}

