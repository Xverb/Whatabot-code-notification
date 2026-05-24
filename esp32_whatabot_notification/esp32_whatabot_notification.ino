#include <WiFi.h>
#include "Whatabot.h"

// Wi-Fi credentials
const char* ssid = "YOUR_SSID";
const char* pass = "YOUR_PASSWORD";

// Whatabot Credentials
String apiKey = "YOUR API KEY";
String phone  = "YOUR NUMBER";   // Destination number (country code + number)

Whatabot bot(apiKey, phone);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) delay(500);

  // Send a message in just one line!
  bot.send("Hi from ESP32—the code is now concise!");
}

void loop() {}
