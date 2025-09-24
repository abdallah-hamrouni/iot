#include <Arduino.h>
#include <WiFi.h>

#define LED_PIN 15     // Broche LED

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("=== ESP32 MAC Address ===");
  String macAddress = WiFi.macAddress();
  Serial.print("Adresse MAC : ");
  Serial.println(macAddress);

  pinMode(LED_PIN, OUTPUT); // LED comme sortie
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Allume la LED
  Serial.println("LED ON");
  delay(1000);

  digitalWrite(LED_PIN, LOW);  // Éteint la LED
  Serial.println("LED OFF");
  delay(1000);
}
