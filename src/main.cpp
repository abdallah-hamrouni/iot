#include <Arduino.h>
#include <WiFi.h>


void setup() {
  Serial.begin(115200);                // Démarre la communication série
  delay(1000);                         // Attente pour que le moniteur série soit prêt
 
  Serial.println("=== Lecture de l'adresse MAC de l'ESP32 ===");
  String macAddress = WiFi.macAddress();  // Récupère l'adresse MAC
  Serial.print("Adresse MAC : ");
  Serial.println(macAddress);            // L'affiche dans le moniteur série
}


void loop() {
  // Rien à faire ici pour ce TP
}

