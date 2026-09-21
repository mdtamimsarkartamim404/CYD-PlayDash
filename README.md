Apnar `sketch_sep21a.ino` [source: 1] code-er upor base kore ekta fully professional `README.md` file toiri kore dewa holo. Sathe ekta ASCII visual preview diagram-o add kora hoyeche jate GitHub repository-te dekhte khub shundor ebong structured lage.

---

### `README.md` File Content:

```markdown
# 📱 CYD HUB - ESP32 Touchscreen Dashboard & Gaming Console

![ESP32](https://img.shields.io/badge/ESP32-2432S028R-blue?style=for-the-badge&logo=espressif)
![Framework](https://img.shields.io/badge/Arduino-IDE-00979D?style=for-the-badge&logo=arduino)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

**CYD HUB** is a feature-rich, interactive touch GUI dashboard designed specifically for the **Cheap Yellow Display (CYD)** — `ESP32-2432S028R` (2.8" ST7789 TFT version). It combines a digital/analog clock, live weather updates, customizable timers, detailed settings, and 8 built-in mini-games into a single smooth 320x240 touch UI.

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
* 🌤️ **Real-Time Weather:** Powered by Open-Meteo API. Displays current temperature, feels-like temp, wind speed, humidity, and 3-day forecast.
* 🎮 **8 Embedded Retro Games:**
1. **Tic-Tac-Toe (X & O)** — Play against an AI with intelligent move selection.
2. **Snake** — Classic arcade snake game with swipe controls.
3. **Memory Match** — Flip and match color/shape pairs.
4. **Whack-a-Mole** — Speed tapping reaction game.
5. **Reflex Test** — Millisecond accuracy response test.
6. **2048** — Full touch-swipe puzzle game.
7. **Breakout (Bricks)** — Paddle and ball physics arcade game.
8. **Simon Says** — Memory pattern game with sound feedback.


* 🎨 **5 Custom Themes:** Midnight, Sunset, Forest, Light, and AMOLED Black.
* ⚙️ **Persistent Preferences:** Automatically saves theme selection, screen brightness, 12/24h toggle, sound toggle, and temperature units (°C/°F) using NVS EEPROM.

---

## 🛠️ Hardware Requirements

* **Board:** ESP32-2432S028R (Cheap Yellow Display / CYD)
* **Display:** 2.8" ST7789 TFT LCD (320x240 Resolution)
* **Touch Controller:** XPT2046 SPI Touchscreen
* **Audio:** Onboard Piezo Buzzer / Speaker on GPIO 26

### Pinout Mapping

| Component | ESP32 Pin |
| --- | --- |
| **Backlight PWM** | GPIO 21 |
| **Buzzer / Audio** | GPIO 26 |
| **Touch CLK** | GPIO 25 |
| **Touch MISO** | GPIO 39 |
| **Touch MOSI** | GPIO 32 |
| **Touch CS** | GPIO 33 |

---

## 📚 Required Libraries

Install these libraries using the Arduino Library Manager:

1. **[TFT_eSPI](https://github.com/Bodmer/TFT_eSPI?utm_source=gemini)** by Bodmer *(Configure `User_Setup.h` for ST7789)*
2. **[XPT2046_Touchscreen](https://github.com/PaulStoffregen/XPT2046_Touchscreen?utm_source=gemini)** by Paul Stoffregen
3. **[ArduinoJson](https://github.com/bblanchon/ArduinoJson?utm_source=gemini)** (v7.x) by Benoit Blanchon
4. **Preferences** (Built-in ESP32 core)
5. **WiFi** & **HTTPClient** (Built-in ESP32 core)

---

## 🚀 Getting Started

1. **Clone the repository:**
```bash
git clone [https://github.com/your-username/CYD-Hub.git](https://github.com/your-username/CYD-Hub.git)

```


2. **Configure Wi-Fi & Location:**
Open the sketch file (`sketch_sep21a.ino`) and edit the user configuration section:
```cpp
const char* WIFI_SSID = "YOUR_WIFI_NAME";
const char* WIFI_PASS = "YOUR_WIFI_PASSWORD";
const float LATITUDE  = 24.3745f; // Your latitude
const float LONGITUDE = 88.6042f; // Your longitude

```


3. **Arduino IDE Settings:**
* **Board:** `ESP32 Dev Module`
* **Partition Scheme:** `Huge APP (3MB No OTA / 1MB SPIFFS)` or `Default 4MB`
* **Flash Frequency:** `80MHz`


4. **Upload the code** to your ESP32 CYD board.

---

## 📄 License

This project is open-source under the **MIT License**.

```

---

### Instructions:
1. Apnar GitHub repository-r root folder-e `README.md` naame ekta file toiri korun.
2. Uporer code block-er puro text-tuku copy kore `README.md` file-e paste kore save korun.

```Apnar `sketch_sep21a.ino` [source: 1] code-er upor base kore ekta fully professional `README.md` file toiri kore dewa holo. Sathe ekta ASCII visual preview diagram-o add kora hoyeche jate GitHub repository-te dekhte khub shundor ebong structured lage.

---

### `README.md` File Content:

```markdown
# 📱 CYD HUB - ESP32 Touchscreen Dashboard & Gaming Console

![ESP32](https://img.shields.io/badge/ESP32-2432S028R-blue?style=for-the-badge&logo=espressif)
![Framework](https://img.shields.io/badge/Arduino-IDE-00979D?style=for-the-badge&logo=arduino)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

**CYD HUB** is a feature-rich, interactive touch GUI dashboard designed specifically for the **Cheap Yellow Display (CYD)** — `ESP32-2432S028R` (2.8" ST7789 TFT version). It combines a digital/analog clock, live weather updates, customizable timers, detailed settings, and 8 built-in mini-games into a single smooth 320x240 touch UI.

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
* 🌤️ **Real-Time Weather:** Powered by Open-Meteo API. Displays current temperature, feels-like temp, wind speed, humidity, and 3-day forecast.
* 🎮 **8 Embedded Retro Games:**
1. **Tic-Tac-Toe (X & O)** — Play against an AI with intelligent move selection.
2. **Snake** — Classic arcade snake game with swipe controls.
3. **Memory Match** — Flip and match color/shape pairs.
4. **Whack-a-Mole** — Speed tapping reaction game.
5. **Reflex Test** — Millisecond accuracy response test.
6. **2048** — Full touch-swipe puzzle game.
7. **Breakout (Bricks)** — Paddle and ball physics arcade game.
8. **Simon Says** — Memory pattern game with sound feedback.


* 🎨 **5 Custom Themes:** Midnight, Sunset, Forest, Light, and AMOLED Black.
* ⚙️ **Persistent Preferences:** Automatically saves theme selection, screen brightness, 12/24h toggle, sound toggle, and temperature units (°C/°F) using NVS EEPROM.

---

## 🛠️ Hardware Requirements

* **Board:** ESP32-2432S028R (Cheap Yellow Display / CYD)
* **Display:** 2.8" ST7789 TFT LCD (320x240 Resolution)
* **Touch Controller:** XPT2046 SPI Touchscreen
* **Audio:** Onboard Piezo Buzzer / Speaker on GPIO 26

### Pinout Mapping

| Component | ESP32 Pin |
| --- | --- |
| **Backlight PWM** | GPIO 21 |
| **Buzzer / Audio** | GPIO 26 |
| **Touch CLK** | GPIO 25 |
| **Touch MISO** | GPIO 39 |
| **Touch MOSI** | GPIO 32 |
| **Touch CS** | GPIO 33 |

---

## 📚 Required Libraries

Install these libraries using the Arduino Library Manager:

1. **[TFT_eSPI](https://github.com/Bodmer/TFT_eSPI?utm_source=gemini)** by Bodmer *(Configure `User_Setup.h` for ST7789)*
2. **[XPT2046_Touchscreen](https://github.com/PaulStoffregen/XPT2046_Touchscreen?utm_source=gemini)** by Paul Stoffregen
3. **[ArduinoJson](https://github.com/bblanchon/ArduinoJson?utm_source=gemini)** (v7.x) by Benoit Blanchon
4. **Preferences** (Built-in ESP32 core)
5. **WiFi** & **HTTPClient** (Built-in ESP32 core)

---

## 🚀 Getting Started

1. **Clone the repository:**
```bash
git clone [https://github.com/your-username/CYD-Hub.git](https://github.com/your-username/CYD-Hub.git)

```


2. **Configure Wi-Fi & Location:**
Open the sketch file (`sketch_sep21a.ino`) and edit the user configuration section:
```cpp
const char* WIFI_SSID = "YOUR_WIFI_NAME";
const char* WIFI_PASS = "YOUR_WIFI_PASSWORD";
const float LATITUDE  = 24.3745f; // Your latitude
const float LONGITUDE = 88.6042f; // Your longitude

```


3. **Arduino IDE Settings:**
* **Board:** `ESP32 Dev Module`
* **Partition Scheme:** `Huge APP (3MB No OTA / 1MB SPIFFS)` or `Default 4MB`
* **Flash Frequency:** `80MHz`


4. **Upload the code** to your ESP32 CYD board.

---

## 📄 License

This project is open-source under the **MIT License**.

```

---

### Instructions:
1. Apnar GitHub repository-r root folder-e `README.md` naame ekta file toiri korun.
2. Uporer code block-er puro text-tuku copy kore `README.md` file-e paste kore save korun.

```
