# 🟣 CYD HUB

### A Professional Touchscreen Dashboard & Mini Gaming Hub for ESP32 CYD

**CYD HUB** is a multifunctional touchscreen application built for the **ESP32-2432S028R 2.8" Cheap Yellow Display (CYD)**.

It combines everyday utilities, online information, customization, and casual games into a single compact embedded interface.

The project provides:

- 🕐 Digital & Analog Clock
- ⏱ Countdown Timer
- ⏱ Stopwatch with Laps
- 🌦 Online Weather
- 🎮 8 Built-in Games
- 🎨 5 UI Themes
- 🔊 Sound Feedback
- 💡 Adjustable Brightness
- 📶 Wi-Fi Connectivity
- 💾 Persistent Settings
- 🏆 Persistent Game High Scores
- 🖐 Touchscreen Navigation

---

## ✨ Project Highlights

CYD HUB is designed specifically around the limitations and capabilities of a small ESP32 touchscreen.

The firmware uses a screen-based UI architecture where each major feature has its own screen and input loop.

```text
                    ┌──────────────────┐
                    │     CYD HUB      │
                    │   ESP32 + Touch  │
                    └────────┬─────────┘
                             │
        ┌────────────┬───────┼────────┬─────────────┐
        ▼            ▼       ▼        ▼             ▼
     Clock         Timer   Weather   Games       Settings
        │            │       │        │             │
        │            │       │        ├─ X & O      ├─ Theme
        │            │       │        ├─ Snake      ├─ Brightness
        │            │       │        ├─ Memory     ├─ 12/24h
        │            │       │        ├─ Whack      ├─ Sound
        │            │       │        ├─ Reflex     └─ °C/°F
        │            │       │        ├─ 2048
        │            │       │        ├─ Bricks
        │            │       │        └─ Simon
        │            │       │
        └────────────┴───────┴────────────────────────
```

---

# 🚀 Features

## 🏠 Home Dashboard

The home screen provides five main touch areas:

| Section | Function |
|---|---|
| 🕐 Clock | Digital / analog clock |
| ⏱ Timer | Countdown timer |
| 🌦 Weather | Current weather and forecast |
| 🎮 Games | Eight built-in games |
| ⚙ Settings | Device customization |

The dashboard also displays:

- Current time
- Date
- Wi-Fi status
- Weather temperature when available
- Connection state

The firmware updates the home information without unnecessarily redrawing the entire interface.

---

# 🕐 Clock

CYD HUB includes both **digital and analog clock functionality**.

### Features

- NTP time synchronization
- Digital clock
- Analog clock
- 12-hour mode
- 24-hour mode
- Current date
- Day information
- Automatic screen updates

The firmware uses the ESP32 time functions and synchronizes time after connecting to Wi-Fi.

### Digital Mode

Example:

```text
10:42 PM

SUN, 21 SEP
```

### Analog Mode

The clock uses a graphical dial with:

- Hour marks
- Minute marks
- Hour hand
- Minute hand
- Second hand

---

# ⏱ Timer & Stopwatch

The Timer screen contains two modes:

```text
┌───────────────┬───────────────┐
│     TIMER     │   STOPWATCH   │
└───────────────┴───────────────┘
```

## Countdown Timer

The countdown system supports:

- Start
- Pause / stop
- Reset
- Adjustable duration
- Progress indicator
- Completion indication
- Sound feedback

The timer is processed in the background, allowing it to continue while navigating through the application.

## Stopwatch

The stopwatch provides:

- Start
- Stop
- Reset
- Millisecond display
- Lap recording

The interface displays recent lap information directly below the stopwatch.

---

# 🌦 Weather

Weather information is retrieved from **Open-Meteo** through an internet connection.

The weather interface includes:

- Current temperature
- Feels-like temperature
- Humidity
- Wind speed
- Weather condition icon
- Three-day forecast
- High temperature
- Low temperature
- Celsius / Fahrenheit support

Example layout:

```text
          WEATHER

          28°C
       Partly Cloudy

  Feels Like   Humidity    Wind
     30°C        72%      14 km/h

  ┌────────┐ ┌────────┐ ┌────────┐
  │  MON   │ │  TUE   │ │  WED   │
  │  30°   │ │  31°   │ │  29°   │
  │  24°   │ │  25°   │ │  23°   │
  └────────┘ └────────┘ └────────┘
```

Weather data is refreshed periodically rather than continuously to reduce unnecessary network requests.

---

# 🎮 Built-in Games

CYD HUB contains **8 games**.

## 1. X & O

Classic Tic-Tac-Toe gameplay.

Features:

- 3×3 board
- X and O
- Win detection
- Draw detection
- Win counter
- Persistent score

---

## 2. Snake

Classic touchscreen Snake gameplay.

Features include:

- Touch-controlled gameplay
- Food generation
- Growing snake
- Collision detection
- Score tracking
- High score

---

## 3. Memory

A touchscreen memory matching game.

Features:

- Hidden cards
- Matching
- Move counting
- Completion detection
- Best result storage

The project records the best result in moves for this game.

---

## 4. Whack

A reaction-based touch game where the player interacts with targets appearing on the screen.

Features:

- Random target positions
- Fast interaction
- Score tracking
- Game-over handling
- High score

---

## 5. Reflex

A reaction-time game.

The result is measured in milliseconds.

```text
Reaction Time

     248 ms
```

The project treats a **lower reaction time as better**, rather than using the normal higher-score model.

---

## 6. 2048

A touchscreen implementation of the classic tile-merging puzzle.

Features:

- Swipe/touch interaction
- Tile merging
- Score tracking
- Game-over detection
- Persistent best score

---

## 7. Bricks

A compact Breakout-style game.

Features:

- Paddle
- Ball physics
- Brick grid
- Collision detection
- Score
- Game-over state
- Replay

The paddle follows touchscreen input.

---

## 8. Simon

A memory sequence game.

The player must reproduce an increasing sequence of actions.

The project stores the best achieved level.

---

# 🏆 High Score System

Each game has its own stored result.

The firmware supports different scoring models.

For example:

```text
X & O      → Wins
Memory     → Moves
Reflex     → Milliseconds
Simon      → Level
Other      → Best Score
```

The high scores are stored using ESP32 **Preferences / NVS**, so they remain available after restarting the device.

---

# 🎨 Themes

CYD HUB includes five built-in themes.

| Theme | Style |
|---|---|
| Midnight | Dark modern interface |
| Sunset | Warm accent interface |
| Forest | Green-inspired interface |
| Light | Bright interface |
| AMOLED | Deep black interface |

Themes control the application's:

- Background
- Panels
- Primary text
- Secondary text
- Accent colors
- Success colors
- Error colors
- UI highlights

The selected theme is saved permanently.

---

# ⚙️ Settings

The Settings screen provides direct control over the main device preferences.

## Available Settings

### 🎨 Theme

Cycle through the available themes.

### 💡 Brightness

Adjust display brightness using a touchscreen slider.

### 🕐 24-Hour Clock

Switch between:

```text
12-hour
24-hour
```

### 🔊 Sound

Enable or disable interface/game sounds.

### 🌡 Temperature

Switch between:

```text
°C
°F
```

---

# 💾 Persistent Configuration

CYD HUB uses the ESP32 `Preferences` library.

Stored configuration includes:

```text
Theme
Brightness
12/24-hour mode
Sound
Temperature unit
Analog clock mode
Game high scores
```

Example storage namespace:

```cpp
prefs.begin("cydhub", false);
```

Configuration is loaded during startup and saved when settings change.

---

# 📶 Wi-Fi

The firmware starts in Wi-Fi station mode:

```cpp
WiFi.mode(WIFI_STA);
WiFi.begin(WIFI_SSID, WIFI_PASS);
```

Wi-Fi is used for:

- NTP time synchronization
- Weather data
- Online functionality

The home screen displays connection information and the Settings screen can show:

- Local IP address
- RSSI / signal strength

---

# 🔐 Privacy-Safe Configuration

This public project intentionally does **not** expose personal network or location information.

Before publishing the project, configure your local copy with:

```cpp
const char* WIFI_SSID = "YOUR_WIFI_NAME";
const char* WIFI_PASS = "YOUR_WIFI_PASSWORD";

const char* CITY_NAME = "YOUR_CITY";

const float LATITUDE  = YOUR_LATITUDE;
const float LONGITUDE = YOUR_LONGITUDE;
```

Do not commit:

```text
Real Wi-Fi passwords
Private API keys
Private tokens
Personal addresses
Private coordinates
Private network information
```

---

# 🧩 Hardware

## Target Board

```text
ESP32-2432S028R
2.8" Cheap Yellow Display
320 × 240
ST7789
XPT2046 Touch
```

The source code specifically identifies the target as an:

```text
ESP32-2432S028R
2.8" Cheap Yellow Display
ST7789 version
```

---

# 🔌 Pin Configuration

The current firmware defines the following pins:

| Function | GPIO |
|---|---:|
| Backlight | 21 |
| Speaker | 26 |
| Touch CLK | 25 |
| Touch MISO | 39 |
| Touch MOSI | 32 |
| Touch CS | 33 |

```cpp
#define PIN_BL      21
#define PIN_SPK     26

#define TOUCH_CLK   25
#define TOUCH_MISO  39
#define TOUCH_MOSI  32
#define TOUCH_CS    33
```

> ⚠️ CYD boards are available in different hardware revisions. Always verify your board before using these pin definitions.

---

# 🖐 Touch Calibration

The firmware contains configurable touch calibration values.

```cpp
#define TS_X_MIN 440
#define TS_X_MAX 3568
#define TS_Y_MIN 504
#define TS_Y_MAX 3561
#define TS_Z_MIN 250
```

These values are specific to the touchscreen calibration used during development.

For another CYD panel, recalibration may be necessary.

---

# 🖥 Display Configuration

The firmware is configured for:

```cpp
#define TFT_ROT        1
#define TOUCH_FLIP     0
#define INVERT_COLORS  0
```

Landscape orientation is used by default.

If the display appears inverted or colors look negative, these settings may need adjustment.

---

# 🛠 Software Requirements

## Arduino IDE

Recommended environment:

```text
Arduino IDE
ESP32 Arduino Core
```

The source header indicates compatibility with:

```text
ESP32 Arduino Core 2.x
ESP32 Arduino Core 3.x
```

The project uses:

```text
ESP32 Dev Module
```

as its board configuration.

---

# 📚 Required Libraries

Install the following libraries.

### TFT_eSPI

Display graphics and rendering.

**Author:** Bodmer

### XPT2046_Touchscreen

Resistive touchscreen interface.

**Author:** Paul Stoffregen

### ArduinoJson

JSON parsing for weather data.

**Author:** Benoit Blanchon

The project also uses ESP32/Arduino libraries for:

```text
WiFi
HTTPClient
WiFiClientSecure
Preferences
SPI
time
```

---

# 📦 Arduino IDE Setup

## Step 1 — Install ESP32 Support

Open:

```text
Tools
→ Board
→ Boards Manager
```

Search for:

```text
ESP32
```

Install the Espressif ESP32 platform.

---

## Step 2 — Install Libraries

Open:

```text
Sketch
→ Include Library
→ Manage Libraries
```

Install:

```text
TFT_eSPI
XPT2046_Touchscreen
ArduinoJson
```

---

## Step 3 — Configure TFT_eSPI

Configure TFT_eSPI for your CYD hardware.

Check:

```text
User_Setup_Select.h
```

and the appropriate TFT_eSPI setup file.

The display driver, SPI configuration, rotation, and pins must match your particular CYD board.

---

## Step 4 — Configure Local Settings

Edit the configuration section:

```cpp
const char* WIFI_SSID = "YOUR_WIFI_NAME";
const char* WIFI_PASS = "YOUR_WIFI_PASSWORD";

const char* CITY_NAME = "YOUR_CITY";

const float LATITUDE  = YOUR_LATITUDE;
const float LONGITUDE = YOUR_LONGITUDE;
```

Keep real values only in your local copy.

---

## Step 5 — Select Board

Select:

```text
ESP32 Dev Module
```

Then choose the correct COM port.

---

## Step 6 — Upload

Connect the CYD through USB and upload the firmware.

Recommended Serial Monitor speed:

```text
115200
```

---

# 🧱 Firmware Architecture

The project uses a simple screen-router architecture.

Main screens:

```cpp
SCR_HOME
SCR_CLOCK
SCR_TIMER
SCR_WEATHER
SCR_GAMES
SCR_SETTINGS
SCR_GAME
```

Screen transitions are handled by:

```cpp
goScreen()
```

The main loop processes global services and then executes the active screen.

Conceptually:

```cpp
void loop() {

    updateTouch();
    beepTick();
    wifiTick();
    timerBackground();
    weatherTick();

    switch (screen) {

        case SCR_HOME:
            homeLoop();
            break;

        case SCR_CLOCK:
            clockLoop();
            break;

        case SCR_TIMER:
            timerLoop();
            break;

        case SCR_WEATHER:
            weatherLoop();
            break;

        case SCR_GAMES:
            gamesLoop();
            break;

        case SCR_SETTINGS:
            settingsLoop();
            break;

        case SCR_GAME:
            gameLoop();
            break;
    }
}
```

This keeps each major feature isolated and easier to maintain.

---

# ⚡ Performance

The firmware is designed for a resource-constrained ESP32 environment.

Several techniques are used to reduce unnecessary work:

- Cached home-screen header state
- Background timer processing
- Periodic weather updates
- Event-driven touch handling
- Screen-specific rendering
- Delayed high-score persistence
- Small UI drawing regions
- Non-blocking background processing where practical

The main loop also uses a very short delay:

```cpp
delay(1);
```

to keep the interface responsive.

---

# 🌐 Weather Refresh Strategy

The weather screen does not continuously request data.

The firmware checks whether weather data is old before refreshing it.

The current implementation uses a roughly:

```text
10 minute
```

refresh interval for automatic weather updates.

A manual refresh control is also available from the Weather screen.

---

# 🔊 Audio & Backlight

The firmware includes hardware PWM functionality for:

### Speaker

Used for:

- Touch feedback
- Game events
- Success/failure events
- Timer notifications

### Backlight

Used for:

- Display brightness
- User-controlled brightness slider

ESP32 Arduino Core differences are handled in the source using a core-version check.

---

# 🧭 Navigation

Navigation is designed around a consistent top bar.

Typical flow:

```text
Home
 │
 ├── Clock ────────┐
 ├── Timer ────────┤
 ├── Weather ──────┤
 ├── Games ────────┤
 │                  │
 │   ┌──────────────┴───────┐
 │   │ X & O                │
 │   │ Snake                │
 │   │ Memory               │
 │   │ Whack                │
 │   │ Reflex               │
 │   │ 2048                 │
 │   │ Bricks               │
 │   │ Simon                │
 │   └──────────────────────┘
 │
 └── Settings
```

The back button returns from individual screens to the appropriate parent screen.

---

# 📁 Recommended Repository Structure

```text
CYD-HUB/
│
├── CYD-HUB.ino
├── README.md
├── LICENSE
│
├── docs/
│   ├── home.png
│   ├── clock.png
│   ├── timer.png
│   ├── weather.png
│   ├── games.png
│   └── settings.png
│
└── screenshots/
    ├── dashboard/
    ├── games/
    └── themes/
```

---

# 🧪 Troubleshooting

## White Screen

Check:

- TFT_eSPI configuration
- Display driver
- SPI configuration
- Display rotation
- `INVERT_COLORS`
- Board hardware revision

---

## Touch Not Working

Check:

- XPT2046 library
- Touch SPI pins
- Touch CS
- Touch rotation
- Touch calibration values

---

## Touch Is Offset

Recalibrate:

```cpp
TS_X_MIN
TS_X_MAX
TS_Y_MIN
TS_Y_MAX
```

Also verify:

```cpp
ts.setRotation(...)
```

---

## Wi-Fi Not Connecting

Verify:

```cpp
WIFI_SSID
WIFI_PASS
```

Also check that your router provides a compatible 2.4 GHz network.

---

## Weather Not Updating

Check:

- Wi-Fi connection
- Internet access
- Latitude
- Longitude
- Open-Meteo response
- JSON parsing
- Refresh interval

---

## Time Not Synchronizing

Check:

- Wi-Fi
- Internet access
- NTP configuration
- GMT offset
- ESP32 system time

---

# 🔒 Public GitHub Checklist

Before publishing:

- [ ] Remove real Wi-Fi password
- [ ] Remove private network information
- [ ] Remove personal coordinates if desired
- [ ] Remove API keys
- [ ] Remove private tokens
- [ ] Remove personal contact information
- [ ] Check old commits
- [ ] Check uploaded screenshots
- [ ] Check Serial Monitor screenshots
- [ ] Check configuration files

A project can accidentally expose credentials through Git history even after they are removed from the latest source.

---

# 🗺️ Roadmap

Potential future improvements:

- [ ] More games
- [ ] More themes
- [ ] Better touch calibration screen
- [ ] Alarm functionality
- [ ] Multiple timers
- [ ] More clock styles
- [ ] Expanded weather information
- [ ] Weather animations
- [ ] Game statistics
- [ ] Improved game menus
- [ ] OTA firmware update
- [ ] Web-based configuration
- [ ] More CYD hardware profiles
- [ ] Additional display support

---

# 🤝 Contributing

Contributions are welcome.

When submitting changes:

1. Keep the UI optimized for a 320×240 touchscreen.
2. Avoid unnecessary memory consumption.
3. Preserve existing navigation.
4. Test on actual hardware.
5. Document hardware-specific changes.
6. Avoid committing private configuration.
7. Keep game and screen code modular.

For hardware-specific changes, document:

```text
Board
Display
Touch controller
ESP32 core version
TFT_eSPI configuration
Pin configuration
```

---

# 📜 License

This project is released under the **MIT License**.

You are free to:

- Use the project
- Modify it
- Study it
- Build hardware projects with it
- Create derivative projects
- Redistribute modified versions

See the `LICENSE` file for the complete license text.

---

# 🙏 Credits

Built using the ESP32 and Arduino ecosystem.

Special thanks to the open-source projects used by CYD HUB:

- Espressif ESP32 Arduino Core
- TFT_eSPI
- XPT2046_Touchscreen
- ArduinoJson
- Open-Meteo
- Arduino ecosystem contributors

---

# ⭐ CYD HUB at a Glance

| Category | Details |
|---|---|
| MCU | ESP32 |
| Display | 2.8" CYD |
| Resolution | 320×240 |
| Display Driver | ST7789 |
| Touch | XPT2046 |
| Connectivity | Wi-Fi |
| Time | NTP |
| Weather | Open-Meteo |
| Games | 8 |
| Themes | 5 |
| Storage | ESP32 Preferences / NVS |
| Audio | Supported |
| Brightness | PWM |
| UI | Touchscreen |

---

# 🎯 Final Overview

**CYD HUB** turns the ESP32 Cheap Yellow Display into a compact all-in-one touchscreen platform.

Instead of using the CYD only as a basic display, this project combines:

```text
┌─────────────────────────────────────────┐
│               CYD HUB                   │
├─────────────────────────────────────────┤
│                                         │
│       🕐 CLOCK                          │
│                                         │
│       ⏱ TIMER / STOPWATCH              │
│                                         │
│       🌦 WEATHER                        │
│                                         │
│       🎮 8 GAMES                        │
│                                         │
│       🎨 5 THEMES                       │
│                                         │
│       ⚙ SETTINGS                        │
│                                         │
│       📶 WI-FI                          │
│                                         │
└─────────────────────────────────────────┘
```

It is designed as a foundation for experimenting with:

- ESP32 touchscreen interfaces
- Embedded UI development
- IoT dashboards
- Small gaming systems
- Network-enabled displays
- Hardware interaction
- Persistent configuration
- Custom embedded applications

---

## ⭐ Support the Project

If you find CYD HUB useful:

- ⭐ Star the repository
- 🍴 Fork the project
- 🛠 Improve the firmware
- 🎮 Add new games
- 🎨 Create new themes
- 🐛 Report bugs
- 💡 Suggest improvements

**Built for the ESP32 CYD community.**
