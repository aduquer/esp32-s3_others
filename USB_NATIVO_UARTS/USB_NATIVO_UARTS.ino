#include "Arduino.h"



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
    Serial.println("USB CDC listo loop 1");
    delay(1000); // Espera 1 segundo antes de repetir
}
