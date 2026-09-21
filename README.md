# 🎮 CYD PlayDash

### ⚡ ESP32 Touchscreen Dashboard • Mini Gaming Console • Smart Control Center

<p align="center">

![CYD PlayDash](https://img.shields.io/badge/CYD-PlayDash-7C3AED?style=for-the-badge&logo=espressif&logoColor=white)

![ESP32](https://img.shields.io/badge/ESP32-2432S028R-00979D?style=for-the-badge&logo=espressif&logoColor=white)

![Arduino](https://img.shields.io/badge/Arduino-IDE-00878F?style=for-the-badge&logo=arduino&logoColor=white)

![Touch UI](https://img.shields.io/badge/Touch-Enabled-06B6D4?style=for-the-badge)

![Games](https://img.shields.io/badge/Mini--Games-8-F59E0B?style=for-the-badge)

![Weather](https://img.shields.io/badge/Weather-Live-22C55E?style=for-the-badge)

![License](https://img.shields.io/badge/License-MIT-22C55E?style=for-the-badge)

</p>

<p align="center">

**A compact all-in-one touchscreen experience built for the ESP32 CYD.**

Digital Clock • Weather • Timer • Stopwatch • Games • Themes • Settings

</p>

---

## 🌟 Project Overview

**CYD PlayDash** transforms the **ESP32-2432S028R Cheap Yellow Display (CYD)** into a compact touchscreen dashboard and gaming console.

Instead of using the display for a single-purpose project, PlayDash combines everyday utilities, live information, customization, and retro-style games into one interactive interface.

```text
                  ┌─────────────────────────┐
                  │       CYD PlayDash      │
                  │   ESP32 Touch Console   │
                  └────────────┬────────────┘
                               │
          ┌────────────────────┼────────────────────┐
          │                    │                    │
     ┌────▼────┐          ┌────▼────┐          ┌────▼────┐
     │ Dashboard│          │ Weather │          │  Games  │
     └─────────┘          └─────────┘          └─────────┘
          │                    │                    │
     Clock / Timer         Live API            8 Games
     Stopwatch             Forecast            Touch UI
          │                    │                    │
          └────────────────────┼────────────────────┘
                               │
                         ┌─────▼─────┐
                         │ Settings  │
                         │ Themes    │
                         │ Preferences│
                         └───────────┘
```

---

# ✨ Feature Highlights

| Feature | Status | Description |
|---|:---:|---|
| 🕐 Digital Clock | ✅ | Real-time NTP synchronized clock |
| 🕰️ Analog Clock | ✅ | Touch-friendly analog interface |
| ⏱️ Countdown Timer | ✅ | Adjustable countdown timer |
| 🏁 Stopwatch | ✅ | Stopwatch with lap recording |
| 🌤️ Live Weather | ✅ | Open-Meteo powered weather data |
| 📅 Forecast | ✅ | Multi-day weather forecast |
| 🎮 Mini Games | ✅ | 8 built-in touchscreen games |
| 🎨 Themes | ✅ | 5 customizable UI themes |
| 🔊 Sound | ✅ | Configurable game/audio feedback |
| 💡 Brightness | ✅ | Adjustable display brightness |
| 🌡️ Temperature Units | ✅ | Celsius / Fahrenheit |
| 💾 Preferences | ✅ | Persistent settings using NVS |
| 📶 Wi-Fi | ✅ | Wireless network connectivity |
| 👆 Touch Controls | ✅ | XPT2046 touchscreen input |

---

# 🖥️ Main Dashboard

The main dashboard is designed to provide important information at a glance.

```text
┌──────────────────────────────────────────────────────┐
│  🕐 10:45 AM       Mon, 21 Sep           📶 WiFi     │
│                                                      │
│  📍 Rajshahi, Bangladesh              🌤️ 28°C       │
├──────────────────────────────────────────────────────┤
│                                                      │
│   ┌──────────┐  ┌──────────┐  ┌──────────┐          │
│   │   🕐     │  │    ⏱️    │  │    🌤️    │          │
│   │  CLOCK   │  │  TIMER   │  │ WEATHER  │          │
│   └──────────┘  └──────────┘  └──────────┘          │
│                                                      │
│   ┌──────────────────────┐  ┌──────────┐             │
│   │        🎮            │  │    ⚙️    │             │
│   │     PLAY GAMES       │  │ SETTINGS │             │
│   └──────────────────────┘  └──────────┘             │
│                                                      │
└──────────────────────────────────────────────────────┘
```

---

# 🎮 Built-in Gaming Hub

PlayDash includes **8 touchscreen mini-games** designed specifically for the small CYD display.

| # | Game | Gameplay |
|---:|---|---|
| 01 | ❌⭕ **Tic-Tac-Toe** | Play against an AI opponent |
| 02 | 🐍 **Snake** | Classic snake with touch/swipe control |
| 03 | 🧠 **Memory Match** | Find matching cards |
| 04 | 🐹 **Whack-a-Mole** | Fast reaction tapping challenge |
| 05 | ⚡ **Reflex Test** | Measure reaction time in milliseconds |
| 06 | 🔢 **2048** | Touch-swipe number puzzle |
| 07 | 🧱 **Breakout** | Paddle + ball arcade game |
| 08 | 🎵 **Simon Says** | Remember and repeat patterns |

### 🎯 Gaming Philosophy

The games are designed around:

- 👆 Touch-first interaction
- ⚡ Fast response
- 🖥️ Low-resolution display optimization
- 🧠 Simple but engaging gameplay
- 🔊 Optional sound feedback
- 🎨 Consistent PlayDash visual design

---

# 🌦️ Live Weather System

PlayDash can retrieve live weather information through the **Open-Meteo API**.

### Current Conditions

- 🌡️ Temperature
- 🌡️ Feels-like temperature
- 💧 Relative humidity
- 💨 Wind speed
- 🌤️ Weather condition
- 📍 Configurable location

### Forecast

The dashboard can display a multi-day forecast without requiring a separate weather application.

```text
┌──────────────────────────────────┐
│          🌤️ WEATHER              │
├──────────────────────────────────┤
│  📍 Rajshahi                     │
│                                  │
│          28°C                    │
│       Feels 30°C                 │
│                                  │
│  💧 72%       💨 12 km/h         │
│                                  │
│  Today    ☀️  28°C               │
│  Tomorrow 🌤️  30°C               │
│  Day 3    🌧️  27°C               │
└──────────────────────────────────┘
```

---

# 🕐 Clock & Time System

### Digital Mode

Displays:

- Current time
- Date
- Day
- 12/24-hour format
- Wi-Fi synchronized time

### Analog Mode

A traditional analog clock interface is available for a more visual experience.

### ⏱️ Timer

Quick adjustment controls:

```text
       ┌─────────┐
       │ 05:00   │
       └─────────┘

   [-1m] [-10s] [+10s] [+1m]

          ▶ START
```

### 🏁 Stopwatch

Includes:

- Start
- Pause
- Reset
- Lap recording

---

# 🎨 Theme Engine

PlayDash includes multiple visual themes.

| Theme | Style |
|---|---|
| 🌌 **Midnight** | Dark modern interface |
| 🌅 **Sunset** | Warm colorful appearance |
| 🌲 **Forest** | Green nature-inspired UI |
| ☀️ **Light** | Bright clean interface |
| 🖤 **AMOLED Black** | Deep-black low-light interface |

Theme selection is stored persistently, so your preferred interface remains after reboot.

---

# 💾 Persistent Preferences

Settings are stored using the ESP32 **Preferences / NVS** system.

The following options can be remembered:

```text
┌───────────────────────────────┐
│         ⚙️ SETTINGS           │
├───────────────────────────────┤
│ 🎨 Theme             Midnight │
│ 💡 Brightness             80% │
│ 🕐 Time Format          24-Hr │
│ 🔊 Sound                  ON   │
│ 🌡️ Temperature             °C │
└───────────────────────────────┘
```

### Stored Configuration

- 🎨 Theme
- 💡 Brightness
- 🕐 12/24-hour mode
- 🔊 Sound preference
- 🌡️ Celsius/Fahrenheit
- ⚙️ Other user preferences

---

# 🧩 System Architecture

```text
                 CYD PlayDash
                      │
       ┌──────────────┼──────────────┐
       │              │              │
   Display          Input          Network
       │              │              │
  TFT_eSPI       XPT2046         WiFi
       │              │              │
       │              │        ┌─────▼─────┐
       │              │        │ Open-Meteo│
       │              │        └───────────┘
       │              │
       └───────┬──────┘
               │
         Application Core
               │
     ┌─────────┼─────────┐
     │         │         │
   Clock     Games    Settings
     │         │         │
     └─────────┼─────────┘
               │
          Preferences
             / NVS
```

---

# 🛠️ Hardware Requirements

### Main Hardware

| Component | Specification |
|---|---|
| 🧠 MCU | ESP32 |
| 🖥️ Board | ESP32-2432S028R / CYD |
| 📺 Display | 2.8" TFT |
| 📐 Resolution | 320 × 240 |
| 👆 Touch | XPT2046 SPI |
| 🔊 Audio | Piezo / onboard speaker |
| 📡 Wireless | ESP32 Wi-Fi |

---

# 🔌 Pin Configuration

| Component | ESP32 GPIO |
|---|---:|
| 💡 Display Backlight PWM | `GPIO 21` |
| 🔊 Buzzer / Audio | `GPIO 26` |
| 👆 Touch CLK | `GPIO 25` |
| 📥 Touch MISO | `GPIO 39` |
| 📤 Touch MOSI | `GPIO 32` |
| 🎯 Touch CS | `GPIO 33` |

> ⚠️ **Important:** CYD boards are available in multiple hardware revisions. Always verify your board's display controller and pin configuration before uploading firmware.

---

# 📚 Required Libraries

Install the following libraries through **Arduino IDE → Library Manager**.

### Core

- `WiFi`
- `HTTPClient`
- `Preferences`

### Display

- `TFT_eSPI`
- `XPT2046_Touchscreen`

### Data

- `ArduinoJson`

### Recommended Versions

| Library | Requirement |
|---|---|
| TFT_eSPI | Latest stable |
| XPT2046_Touchscreen | Latest stable |
| ArduinoJson | 7.x |
| ESP32 Arduino Core | Compatible recent release |

---

# ⚙️ TFT_eSPI Configuration

Before compiling, configure your TFT_eSPI setup according to your CYD hardware revision.

Example:

```cpp
#define TFT_WIDTH  320
#define TFT_HEIGHT 240
```

Make sure the correct:

- Display driver
- MOSI
- MISO
- SCLK
- CS
- DC
- RST
- Backlight

settings are selected for your board.

---

# 🚀 Installation

## 1️⃣ Clone the Repository

```bash
git clone https://github.com/your-username/CYD-PlayDash.git
cd CYD-PlayDash
```

---

## 2️⃣ Open the Project

Open:

```text
sketch_sep21a.ino
```

using **Arduino IDE**.

---

## 3️⃣ Configure Wi-Fi

Find the configuration section:

```cpp
const char* WIFI_SSID = "YOUR_WIFI_NAME";
const char* WIFI_PASS = "YOUR_WIFI_PASSWORD";

const float LATITUDE  = 24.3745f;
const float LONGITUDE = 88.6042f;
```

Replace the values with your own network and location.

---

# 🧭 Arduino IDE Configuration

Recommended settings:

```text
Board              → ESP32 Dev Module
Partition Scheme   → Huge APP
Flash Frequency    → 80MHz
Upload Speed       → 115200 / 921600
Port               → Your ESP32 COM Port
```

Then:

```text
Verify → Upload → Reset ESP32
```

---

# 📁 Suggested Project Structure

```text
CYD-PlayDash/
│
├── 📄 sketch_sep21a.ino
├── 📄 README.md
├── 📄 LICENSE
│
├── 📁 assets/
│   ├── 🖼️ dashboard.png
│   ├── 🖼️ games.png
│   ├── 🖼️ weather.png
│   └── 🖼️ settings.png
│
├── 📁 docs/
│   ├── hardware.md
│   ├── touch-calibration.md
│   └── troubleshooting.md
│
└── 📁 screenshots/
    ├── home.jpg
    ├── clock.jpg
    ├── weather.jpg
    └── games.jpg
```

---

# 📸 Screenshots

Add real screenshots of your CYD here:

### 🏠 Dashboard

```text
/assets/dashboard.png
```

### 🎮 Gaming Hub

```text
/assets/games.png
```

### 🌦️ Weather

```text
/assets/weather.png
```

### ⚙️ Settings

```text
/assets/settings.png
```

> 💡 **Tip:** Real device screenshots make the GitHub repository look significantly more professional.

---

# ⚡ Performance Goals

CYD PlayDash is designed around the limitations of the ESP32 and 320×240 display.

### Optimization Priorities

- ⚡ Fast screen updates
- 🧠 Efficient RAM usage
- 🎮 Lightweight game loops
- 👆 Responsive touch controls
- 📡 Non-blocking network operations where possible
- 💾 Persistent configuration
- 🖥️ Small-display optimized UI

---

# 🛡️ Reliability

The firmware should gracefully handle common situations such as:

```text
Wi-Fi unavailable
      │
      ▼
Offline Dashboard
      │
      ├── Clock continues
      ├── Games continue
      ├── Settings continue
      └── Weather retries later
```

This allows the device to remain useful even when the network is temporarily unavailable.

---

# 🧪 Testing Checklist

Before releasing a firmware build:

```text
☐ Display initializes correctly
☐ Touch coordinates are accurate
☐ Backlight works
☐ Wi-Fi connects
☐ NTP time synchronizes
☐ Weather API responds
☐ Digital clock works
☐ Analog clock works
☐ Timer works
☐ Stopwatch works
☐ All 8 games launch
☐ Game touch controls work
☐ Sound toggle works
☐ Brightness works
☐ Theme switching works
☐ Preferences survive reboot
☐ Device recovers from Wi-Fi failure
```

---

# 🐛 Troubleshooting

## 🖥️ Blank / White Screen

Check:

1. TFT_eSPI driver configuration
2. Display pins
3. Board model
4. `User_Setup.h`
5. Power supply

---

## 👆 Touch Not Working

Verify:

```text
Touch CLK  → GPIO 25
Touch MISO → GPIO 39
Touch MOSI → GPIO 32
Touch CS   → GPIO 33
```

If touch coordinates are offset, perform touch calibration for your specific display.

---

## 📡 Wi-Fi Not Connecting

Check:

- SSID
- Password
- 2.4 GHz network availability
- ESP32 signal strength
- Router compatibility

---

## 🌦️ Weather Not Updating

Check:

- Internet connection
- Latitude/longitude
- API response
- ESP32 system time
- Serial Monitor logs

---

# 🔐 Security Notes

Do **not** commit real Wi-Fi credentials to GitHub.

Instead of:

```cpp
const char* WIFI_PASS = "my-real-password";
```

use:

```cpp
const char* WIFI_PASS = "YOUR_WIFI_PASSWORD";
```

For public repositories, consider moving credentials into a separate configuration file that is included in `.gitignore`.

Example:

```text
config.h
```

and:

```gitignore
config.h
```

---

# 🗺️ Roadmap

### ✅ Current

- [x] Touch dashboard
- [x] Digital clock
- [x] Analog clock
- [x] Timer
- [x] Stopwatch
- [x] Weather
- [x] Forecast
- [x] 8 mini-games
- [x] Theme system
- [x] Persistent preferences

### 🚧 Planned

- [ ] 🎵 Improved audio system
- [ ] 🏆 High-score system
- [ ] 📊 Game statistics
- [ ] 🏅 Achievement system
- [ ] 🌐 Web-based remote control
- [ ] 📱 Mobile companion interface
- [ ] 🔄 OTA firmware updates
- [ ] 🧩 Modular game framework
- [ ] 🎨 Custom theme editor
- [ ] 💾 SD-card data storage
- [ ] 💤 Deep-sleep mode
- [ ] 🔋 Battery monitoring

---

# 🤝 Contributing

Contributions are welcome.

You can contribute by:

- 🐛 Reporting bugs
- 💡 Suggesting features
- 🎮 Adding games
- 🎨 Improving UI
- ⚡ Optimizing performance
- 📚 Improving documentation
- 🔧 Supporting additional CYD hardware revisions

### Contribution Flow

```bash
Fork
  ↓
Create Branch
  ↓
Make Changes
  ↓
Test on CYD
  ↓
Commit
  ↓
Push
  ↓
Pull Request
```

---

# 📜 License

This project is released under the **MIT License**.

You are free to:

- ✅ Use
- ✅ Modify
- ✅ Study
- ✅ Distribute
- ✅ Build upon

See the `LICENSE` file for complete details.

---

# 💙 Acknowledgements

Built using the excellent open-source ecosystem around:

- Espressif ESP32
- Arduino
- TFT_eSPI
- XPT2046 Touchscreen
- ArduinoJson
- Open-Meteo

Special thanks to the open-source developers and communities that make ESP32 projects possible.

---

# ⭐ Support the Project

If you find **CYD PlayDash** useful:

```text
⭐ Star the repository
🍴 Fork the project
🐛 Report bugs
💡 Suggest features
🔧 Submit improvements
📢 Share the project
```

Your support helps the project continue to grow.

---

<div align="center">

## 🎮 CYD PlayDash

### One Display. One ESP32. Endless Possibilities.

**Built for the CYD • Designed for Touch • Powered by ESP32**

<br>

![Made with ESP32](https://img.shields.io/badge/Made%20with-ESP32-blue?style=flat-square&logo=espressif)

![Built with Arduino](https://img.shields.io/badge/Built%20with-Arduino-00979D?style=flat-square&logo=arduino)

![Open Source](https://img.shields.io/badge/Open%20Source-❤️-red?style=flat-square)

<br>

**© 2026 CYD PlayDash**

</div>
