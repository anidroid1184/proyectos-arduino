# 🛠️ Embedded Systems & Firmware Foundations: Arduino Ecosystem

A curated collection of hardware-software integration projects, physical computing, and lower-level logic implementations for microcontrolled architectures.

![Arduino Banner](https://upload.wikimedia.org/wikipedia/commons/3/38/Arduino_Uno_-_R3.jpg)

## 📋 Table of Contents
- [Project Inventory](#-project-inventory)
- [Hardware & Software Requirements](#-hardware--software-requirements)
- [Getting Started](#-getting-started)
- [Contribution](#-contribution)

---

## 🚀 Project Inventory

| #  | Module / System | Technical Description | Core Components & Peripherals |
|-----|----------------------|-------------|--------------------|
| 1   | [Environment Setup](1-inicio-arduino) | IDE Toolchain & basic MCU configuration | Arduino UNO (ATmega328P) |
| 2   | [Digital Input Polling](2-exertura-digital) | State reading and digital signal filtering | Push buttons |
| 3   | [Current-Limiting Circuits](3-led-resistencia) | Fundamental LED circuit protection math | LED, 220Ω Resistor |
| 4   | [GPIO Array Modulation](4-electo-luces-led-navidad) | Sequential multi-channel output logic | Discrete LED Arrays |
| 5   | [Analog-to-Digital Conversion](5-lectura-datos-analogicos) | Photometric data ingestion via ADC | LDR Sensor |
| 6   | [MCU-Based Voltmeter](6-multimetro-con-arduino) | DC voltage measurement through voltage division | Voltage Divider Circuit |
| 7   | [Serial Interface Setup](7-monitor-serial) | Asynchronous serial bus initialization | UART / Serial Monitor |
| 8   | [Analog Input Parsing](8-uso-potenciometro) | Variable resistance reading for parameter control | 10KΩ Potentiometer |
| 9   | [RF Flow Modulation](9-control-de-flujo-rf) | Basic low-power wireless data link | 433MHz RF Module |
| 10  | [Multi-LED Duty Cycle Control](10-control-multiples-led-con-potenciometro) | Dynamic output adjustment via analog references | LEDs, Potentiometer |
| 11  | [Conditional Loops Control](11-loop-while) | Iterative execution blocks under hardware constraints | Control Flow Logic |
| 12  | [Serial Stream Buffer](12-lecturas-seriales) | Terminal character reading and string parsing | UART Bus |
| 13  | [Manual Chromatic Selection](13-seleccion-manual-de-color) | Multi-channel PWM configuration for color spaces | RGB LED |
| 14  | [Frequency Generation (Active)](14-buzzer-activo) | Single-tone acoustic alert deployment | Active Piezo Buzzer |
| 15  | [Frequency Generation (Passive)](15-buzzer-pasivo) | Custom audio melody composition via raw PWM | Passive Piezo Buzzer |
| 16  | [Angular Position Control](16-servo-motor) | PWM duty-cycle manipulation for position holding | SG90 Servomotor |
| 17  | [Bi-Axial Coordinate Reading](17-joystick) | Dual-axis analog reading and switch polling | Joystick Module |
| 18  | [Segmented Visual Outputs](18-paratalla-kcd) | Multiplexed array visualization logic | 7-Segment Display |
| 19  | [Infrared Proximity Tracking](19-sensor-con-sensor-infrarrojo) | Object detection using optical sensor parsing | IR Proximity Sensor |
| 20  | [Robotic Kinematics Model](20-traszo-robotico) | Multi-axis mechatronic system coordination | Joint Servomotors |
| 21  | [AC-DC Power Rectification](21-transformador-AC-DC) | Step-down transformer & filtering implementation | 12V Step-Down Transformer |
| 22  | [SmartTrain Automation System](22-Proyecto_smarttrain) | Automated transit system model with real-time feedback | DC Motors, Feedback Sensors |

---

## ⚙️ Hardware & Software Requirements
- **Hardware Layer**: 
  - MCU Board: Arduino UNO / ATmega328P based hardware
  - Passive Components (Resistors, LEDs, Transistors)
  - Transducers & Sensors (IR, LDR, Joystick)
- **Software Layer**:
  - Toolchain: [Arduino IDE](https://www.arduino.cc/en/software)
  - Communication Drivers: CH340 / FTDI USB-to-Serial drivers

---

## 📥 Getting Started
1. Clone the repository:
```bash
git clone [https://github.com/anidroid1184/proyectos-arduino.git](https://github.com/anidroid1184/proyectos-arduino.git)
