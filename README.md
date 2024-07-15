# DHT11-sensor-and-display-on-a-SH1106-OLED
# Overview

The code initializes the DHT11 sensor and SH1106 OLED display, reads the sensor data, and then displays the data on the OLED screen in a loop.

# OLED-DHT11-Display

This project demonstrates how to read humidity and temperature data from a DHT11 sensor and display it on an SH1106 or SSD1306 OLED display using an Arduino. The project uses the U8g2 library for display control and the DHT library for sensor data.

## Components Used
- Arduino board (e.g., Uno, Mega)
- SH1106 or SSD1306 OLED display
- DHT11 Humidity and Temperature Sensor
- Breadboard and jumper wires

## Software Requirements
- Arduino IDE
- U8g2 library
- DHT library

## Connections
- **DHT11 Sensor:**
  - VCC to 5V
  - GND to GND
  - Data Pin to A0 (analog pin)
- **OLED Display:**
  - VCC to 3.3V or 5V (depending on your display)
  - GND to GND
  - SCL to A5 (analog pin)
  - SDA to A4 (analog pin)

## Installation
1. Install the Arduino IDE from [here](https://www.arduino.cc/en/software).
2. Install the U8g2 library:
   - Open the Arduino IDE.
   - Go to `Sketch` -> `Include Library` -> `Manage Libraries...`.
   - Search for `U8g2` and install it.
3. Install the DHT library:
   - Open the Arduino IDE.
   - Go to `Sketch` -> `Include Library` -> `Manage Libraries...`.
   - Search for `DHT sensor library` and install it.

