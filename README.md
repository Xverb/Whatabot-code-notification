# ESP32 WhatsApp Notifier with Whatabot

Sending WhatsApp messages from an ESP32 using the API **Whatabot** using the HTTP GET method.  
Ideal for IoT notifications, alarms, or remote monitoring.

## 📦 Required Libraries

This code uses the built-in library from the **ESP32 Arduino Core**; **no additional installation is required**.  
Make sure you have installed the ESP32 board in the Arduino IDE.

| Library | Status | Description |
|---------|--------|-------------|
| `WiFi.h` | Default | Connecting the ESP32 to the network |
| `HTTPClient.h` | Default | Sending an HTTP request |
| `UrlEncode.h` | Default | Text encoding for URLs |

> ✅ **You don't need** to install additional libraries via the Library Manager.  
> All of the above libraries are automatically available once you install the **ESP32 board**, but if they aren’t there, you can simply search for them in the Arduino IDE’s library or download them from an external source..

## 🔧 Prerequisites

1. **Arduino IDE** with the ESP32 board installed.  
   - [ESP32 Board Installation Guide](https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html)
2. **Account Whatabot** (free) for get API Key.  
   - Sign up at [https://whatabot.io](https://whatabot.io)
3. Recipient's WhatsApp number (use the international format without the `+` sign).

## 🚀 How to Use

1. **Clone or download** this repository.
2. open file `esp32_notification_whatabot.ino` with Arduino IDE.
3. **change configuration** at the top of the file:
   ```cpp
   const char* ssid = "YOUR_WIFI";      // Replace with your Wi-Fi SSID
   const char* pass = "PASSWORD_WIFI";  // Replace with your password WiFi
   String apiKey = "YOUR_API_KEY";      // Replace with your API Key from Whatabot
   String phone  = "6285xxxxxxxx";      // Replace with the destination number (without the +)
