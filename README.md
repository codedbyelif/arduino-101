# Arduino 101 Project

## Overview
This repository contains Arduino 101 projects and examples designed to help developers learn and experiment with Arduino microcontroller programming. Each project includes complete source code with detailed comments and explanations.

## About This Project
**Author:** [@codedbyelif](https://github.com/codedbyelif)

This project was created to provide comprehensive examples and tutorials for Arduino 101 development, covering various sensors, actuators, and control applications.

## Table of Contents
- [Overview](#overview)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Project Structure](#project-structure)
- [Projects](#projects)
- [Getting Started](#getting-started)
- [Features](#features)
- [Contributing](#contributing)
- [License](#license)

## Prerequisites
Before you begin, ensure you have the following installed:
- Arduino IDE (version 1.8.0 or higher)
- Arduino 101 board drivers
- USB cable for Arduino 101 board
- Basic knowledge of C/C++ programming
- Necessary libraries (Servo.h for motor projects)

## Installation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/codedbyelif/arduino-101.git
   cd arduino-101
   ```

2. **Install Arduino IDE:**
   - Download from [arduino.cc](https://www.arduino.cc/en/software)
   - Follow the installation instructions for macOS

3. **Add Arduino 101 Board:**
   - Open Arduino IDE
   - Go to Tools → Board → Boards Manager
   - Search for "Arduino 101"
   - Click Install

## Project Structure
```
arduino-101/
├── README.md
├── Analog okuma/
│   └── README.md
├── Bluetooth ile RGB LED Kontrolü/
│   ├── README.md
│   └── serial_rgb_led_control.ino
├── Haraket Sensoru İle Servo Motor Konrolu/
│   ├── README.md
│   └── pir_servo_hareket.ino
├── Kara simsek yapimi/
│   └── README.md
├── Park sensoru/
│   └── README.md
├── Rgb Led Uygulaması/
│   └── README.md
├── Ses ile motor kontrolu/
│   ├── README.md
│   └── motor_toggle_kontrol.ino
└── Sıcaklık olcumu/
    ├── README.md
    └── hermistor_temperature_monitor.ino
```

## Projects

### 1. **Analog Reading and Serial Communication**
**Folder:** `Analog okuma/`

Learn how to read analog input values from sensors and communicate data through the serial port. This project demonstrates reading voltage values between 0V and 5V using analog pins.

**Key Concepts:** Analog Input, Serial Communication, Potentiometer

---

### 2. **Bluetooth-Based RGB LED Control**
**Folder:** `Bluetooth ile RGB LED Kontrolü/`

Control the color of an RGB LED using Bluetooth communication. Receive data through a Bluetooth module and display different colors by controlling red, green, and blue LEDs.

**File:** `serial_rgb_led_control.ino`

**Key Concepts:** RGB LED, Bluetooth Module, Serial Communication, Color Mixing

**Supported Colors:**
- 'r' → Red
- 'g' → Green
- 'b' → Blue
- 'w' → White

---

### 3. **Motion Sensor-Based Servo Motor Control**
**Folder:** `Haraket Sensoru İle Servo Motor Konrolu/`

Create a motion-activated system where a servo motor moves when motion is detected by a PIR (Passive Infrared) motion sensor. The motor sweeps back and forth when motion is detected.

**File:** `pir_servo_hareket.ino`

**Key Concepts:** PIR Motion Sensor, Servo Motor, Infrared Detection, Conditional Logic

---

### 4. **Knight Rider LED Animation**
**Folder:** `Kara simsek yapimi/`

Create a classic Knight Rider-style LED animation using the "for" loop. Sequential LED patterns that light up in order, demonstrating efficient loop programming.

**Key Concepts:** For Loops, Sequential Operations, LED Control

---

### 5. **Parking Sensor with Ultrasonic Sensor**
**Folder:** `Park sensoru/`

Build a parking sensor system using an HC-SR04 ultrasonic sensor. Measure the distance to objects and provide feedback based on proximity.

**Key Concepts:** Ultrasonic Sensor (HC-SR04), Distance Measurement, Sound Wave Detection

---

### 6. **RGB LED Application with PWM**
**Folder:** `Rgb Led Uygulaması/`

Create custom colors and brightness levels using PWM (Pulse Width Modulation) on RGB LEDs. Display intermediate colors and various brightness levels.

**Key Concepts:** PWM, RGB LEDs, Brightness Control, Color Gradients

---

### 7. **Motor Control with Sound Sensor**
**Folder:** `Ses ile motor kontrolu/`

Control a motor based on sound levels detected by a sound sensor. Toggle motor on/off using acoustic triggers.

**File:** `motor_toggle_kontrol.ino`

**Key Concepts:** Sound Sensor, Motor Driver, Digital Input, Motor Control

---

### 8. **Temperature Measurement with NTC Thermistor**
**Folder:** `Sıcaklık olcumu/`

Read temperature values using an NTC thermistor and control an LED based on temperature thresholds. Includes temperature conversion using logarithmic functions.

**File:** `hermistor_temperature_monitor.ino`

**Key Concepts:** NTC Thermistor, Analog Reading, Temperature Calculation, Conditional Control

**Features:**
- Continuous temperature monitoring
- LED indicator for temperature threshold (>30°C)
- Serial output for monitoring

---

## Getting Started

### Basic Steps for Any Project

1. **Select a project folder** from the list above
2. **Open the `.ino` file** in Arduino IDE
3. **Select the board:** Tools → Board → Arduino 101
4. **Select the COM port:** Tools → Port → (your port)
5. **Upload the code:** Click the Upload button (or Ctrl+U on Mac: Cmd+U)
6. **Monitor the output:** Open Tools → Serial Monitor (if applicable)

### Example: Running the Temperature Monitor Project

```bash
# Navigate to the temperature project
cd "Sıcaklık olcumu"

# Open hermistor_temperature_monitor.ino in Arduino IDE
# Configure the board and upload
```

## Features
- ✅ Analog input and sensor reading
- ✅ Bluetooth communication and wireless control
- ✅ Motion detection systems
- ✅ LED control (single, RGB, PWM)
- ✅ Servo motor control
- ✅ Ultrasonic distance measurement
- ✅ Temperature monitoring
- ✅ Motor control with various sensors
- ✅ Serial communication and debugging
- ✅ Detailed code comments and explanations

## Hardware Components Used
- Arduino 101 Board
- LEDs (Single color and RGB)
- Servo Motors
- Ultrasonic Sensor (HC-SR04)
- PIR Motion Sensor
- NTC Thermistor
- Sound Sensor
- Motor Driver Board
- Bluetooth Module
- Resistors and Potentiometers

## Contributing
Contributions are welcome! Please feel free to:
- Report bugs or issues
- Suggest improvements and enhancements
- Add new example projects
- Improve documentation and comments
- Share your own Arduino 101 projects

## License
This project is open source and available under the MIT License.

---

**Created by:** [@codedbyelif](https://github.com/codedbyelif)

**Last Updated:** December 10, 2025

For more Arduino projects and tutorials, visit [Arduino Official Website](https://www.arduino.cc/)