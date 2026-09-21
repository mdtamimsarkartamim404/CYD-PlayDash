# 📱 CYD PlayDash - Interactive ESP32 Touch Dashboard & Gaming Console

![ESP32](https://img.shields.io/badge/ESP32-2432S028R-blue?style=for-the-badge&logo=espressif)
![Framework](https://img.shields.io/badge/Arduino-IDE-00979D?style=for-the-badge&logo=arduino)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

**CYD PlayDash** is an action-oriented, interactive touch GUI dashboard designed specifically for the **Cheap Yellow Display (CYD)** — `ESP32-2432S028R` (2.8" ST7789 TFT version)[cite: 1]. It transforms your CYD into a dynamic smart hub, combining a digital/analog clock, live weather updates, timers, and 8 built-in retro mini-games into a single smooth 320x240 touch interface[cite: 1].

---

## 🎨 UI & Dashboard Preview

```text
+-------------------------------------------------------+
|  10:45 AM    Mon, 21 Sep               [WiFi: ||||]   |
|  Rajshahi, BD                         28°C  [Sun]     |
+-------------------------------------------------------+
|  +-----------+  +-----------+  +-----------+          |
|  |  [CLOCK]  |  |  [TIMER]  |  | [WEATHER] |          |
|  |   Clock   |  |   Timer   |  |  Weather  |          |
|  +-----------+  +-----------+  +-----------+          |
|  +--------------------------+  +-----------+          |
|  |  [ GAMEPAD ]             |  |  [ GEAR ] |          |
|  |  8 Mini-Games            |  | Settings  |          |
|  +--------------------------+  +-----------+          |
+-------------------------------------------------------+

```

---

## ✨ Key Features

* 🕒 **Dual Clock Mode:** Switch seamlessly between **Digital** and **Analog** clock layouts with Wi-Fi NTP auto-time sync.


* ⏱️ **Timer & Stopwatch:** Full countdown timer with preset adjustment buttons (+1m, -1m, +10s, -10s) and a lap-recording stopwatch.


* 🌤️ **Real-Time Weather:** Powered by the Open-Meteo API. Displays current temperature, feels-like temp, wind speed, humidity, and a 3-day forecast.


* 🎮 **8 Embedded Action & Puzzle Games**:


1. **Tic-Tac-Toe (X & O)** — Play against a CPU opponent.


2. **Snake** — Classic arcade snake game with touch-swipe steering.


3. **Memory** — Flip and match color and shape pairs.


4. **Whack-a-Mole** — Speed tapping reaction game with a 30-second timer.


5. **Reflex Test** — Millisecond accuracy response test.


6. **2048** — Full touch-swipe puzzle game.


7. **Breakout (Bricks)** — Paddle and ball physics arcade game.


8. **Simon** — Memory pattern game with sound frequencies.




* 🎨 **5 Custom Themes:** Midnight, Sunset, Forest, Light, and Amoled.


* ⚙️ **Persistent Preferences:** Automatically saves theme selection, screen brightness, 12/24h toggle, sound toggle, and temperature units (°C/°F) to NVS storage.



---

## 🛠️ Hardware Requirements

* **Board:** ESP32-2432S028R (Cheap Yellow Display / CYD)


* **Display:** 2.8" ST7789 TFT LCD (320x240 Resolution)


* **Touch Controller:** XPT2046 SPI Touchscreen


* **Audio:** Onboard Piezo Buzzer / Speaker on GPIO 26 (or GPIO 2 depending on core)



### Pinout Mapping

| Component | ESP32 Pin |
| --- | --- |
| **Backlight PWM** | GPIO 21

 |
| **Buzzer / Audio** | GPIO 26

 |
| **Touch CLK** | GPIO 25

 |
| **Touch MISO** | GPIO 39

 |
| **Touch MOSI** | GPIO 32

 |
| **Touch CS** | GPIO 33

 |

---

## 📚 Required Libraries

Install these libraries using the Arduino Library Manager:

1. **TFT_eSPI** by Bodmer *(Configure `User_Setup.h` for ST7789)*

2. **XPT2046_Touchscreen** by Paul Stoffregen


3. **ArduinoJson** (v7.x) by Benoit Blanchon


4. **Preferences** (Built-in ESP32 core)


5. **WiFi** & **HTTPClient** (Built-in ESP32 core)



---

## 🚀 Getting Started

1. **Clone the repository:**
```bash
git clone [https://github.com/your-username/CYD-PlayDash.git](https://github.com/your-username/CYD-PlayDash.git)

```


2. **Configure Wi-Fi & Location:**
Open `sketch_sep21a.ino` and edit the `USER SETTINGS` block:


```cpp
const char* WIFI_SSID = "YOUR_WIFI_NAME";
const char* WIFI_PASS = "YOUR_WIFI_PASSWORD";
const char* CITY_NAME = "Your City";
const float LATITUDE  = 24.3745f; // Your latitude
const float LONGITUDE = 88.6042f; // Your longitude

```


3. **Arduino IDE Settings**:


* **Board:** `ESP32 Dev Module`
* **Partition Scheme:** `Huge APP` or `Default 4MB`


4. **Upload the code** to your ESP32 board.



---

## 📄 License

This project is open-source under the **MIT License**.

```

```
