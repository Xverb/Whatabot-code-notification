# ESP32 WhatsApp Notifier with Whatabot

Mengirim pesan WhatsApp dari ESP32 menggunakan API **Whatabot** dengan metode HTTP GET.  
Cocok untuk notifikasi IoT, alarm, atau monitoring jarak jauh.

## 📦 Library yang Diperlukan

Kode ini menggunakan library bawaan dari **ESP32 Arduino Core**, **tidak perlu instalasi tambahan**.  
Pastikan Anda sudah menginstal board ESP32 di Arduino IDE.

| Library | Status | Keterangan |
|---------|--------|-------------|
| `WiFi.h` | Bawaan | Menghubungkan ESP32 ke jaringan |
| `HTTPClient.h` | Bawaan | Mengirim request HTTP |
| `UrlEncode.h` | Bawaan | Encoding teks untuk URL |

> ✅ **Tidak perlu** menginstal library tambahan melalui Library Manager.  
> Semua library di atas tersedia otomatis setelah Anda menginstal **ESP32 board**.

## 🔧 Prasyarat

1. **Arduino IDE** dengan board ESP32 terinstal.  
   - [Panduan instalasi board ESP32](https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html)
2. **Akun Whatabot** (gratis) untuk mendapatkan API Key.  
   - Daftar di [https://whatabot.net](https://whatabot.net)
3. Nomor WhatsApp tujuan (gunakan format internasional tanpa tanda `+`).

## 🚀 Cara Menggunakan

1. **Clone atau download** repository ini.
2. Buka file `esp32_notification_whatabot.ino` dengan Arduino IDE.
3. **Ubah konfigurasi** di bagian atas file:
   ```cpp
   const char* ssid = "NAMA_WIFI";      // Ganti dengan SSID WiFi Anda
   const char* pass = "PASSWORD_WIFI";  // Ganti dengan password WiFi
   String apiKey = "YOUR_API_KEY";      // Ganti dengan API Key dari Whatabot
   String phone  = "6285xxxxxxxx";      // Ganti dengan nomor tujuan (tanpa +)
