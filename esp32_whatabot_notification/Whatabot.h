#ifndef WHATABOT_H
#define WHATABOT_H

#include <WiFi.h>
#include <HTTPClient.h>
#include <UrlEncode.h>

class Whatabot {
  public:
    // Constructor: store the API key and phone number (in international format without the +)
    Whatabot(String apiKey, String phone) {
      _apiKey = apiKey;
      _phone = phone;
    }

    // Send a WhatsApp message (using the GET method as described in the Whatabot documentation)
    bool send(String text) {
      if (WiFi.status() != WL_CONNECTED) {
        Serial.println("WiFi tidak tersambung");
        return false;
      }

      // The correct Whatabot endpoint (use HTTP, not HTTPS)
      String url = "http://api.whatabot.net/whatsapp/sendMessage?text=";
      url += urlEncode(text);
      url += "&apikey=" + _apiKey;
      url += "&phone=" + _phone;

      HTTPClient http;
      http.begin(url);
      http.addHeader("Content-Type", "application/x-www-form-urlencoded");

      int httpCode = http.GET();
      http.end();

      if (httpCode == 200) {
        Serial.println("Pesan terkirim!");
        return true;
      } else {
        Serial.printf("Gagal, kode HTTP: %d\n", httpCode);
        return false;
      }
    }

  private:
    String _apiKey;
    String _phone;
};

#endif