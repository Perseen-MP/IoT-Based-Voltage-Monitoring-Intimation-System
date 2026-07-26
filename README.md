<div align="center">

# ⚡ IoT-Based Voltage Monitoring & Intimation System

### Real-Time AC Voltage Monitoring using ESP32 & Blynk IoT

<img src="https://img.shields.io/badge/ESP32-IoT-E7352C?style=for-the-badge&logo=espressif" />
<img src="https://img.shields.io/badge/Arduino-IDE-00979D?style=for-the-badge&logo=arduino" />
<img src="https://img.shields.io/badge/Blynk-IoT-23C48E?style=for-the-badge" />
<img src="https://img.shields.io/badge/Platform-Embedded-blue?style=for-the-badge" />
<img src="https://img.shields.io/github/license/USERNAME/REPOSITORY?style=for-the-badge" />
<img src="https://img.shields.io/github/stars/USERNAME/REPOSITORY?style=for-the-badge" />

<br>

*A smart IoT solution that continuously monitors AC voltage, detects abnormal voltage conditions, and instantly notifies users through the Blynk IoT platform.*

---

### ⭐ If you found this project useful, don't forget to star the repository!

</div>

---

# 📸 Project Preview

<p align="center">

<img src="<img width="939" height="555" alt="project_setup" src="https://github.com/user-attachments/assets/243bab87-d67c-4bee-89d8-202d22e09b19" />
" width="750">

</p>

---

# 📑 Table of Contents

- About
- Features
- Hardware
- Software
- Architecture
- Circuit Diagram
- Working
- Blynk Dashboard
- Results
- Installation
- Folder Structure
- Future Scope
- Author

---

# 📖 About the Project

Electrical appliances are often damaged because of sudden voltage fluctuations.

This project provides a **low-cost IoT solution** that continuously monitors AC voltage using an **ESP32** and **ZMPT101B Voltage Sensor**.

Whenever the voltage becomes unsafe, the ESP32 instantly sends notifications through the **Blynk IoT Platform**, while LED indicators display the current status.

---

# ✨ Features

✅ Real-Time Voltage Monitoring

✅ IoT Cloud Connectivity

✅ ESP32 Based

✅ Mobile Notifications

✅ High Voltage Detection

✅ Low Voltage Detection

✅ LED Status Indicators

✅ Low Cost

✅ Easy Installation

✅ Compact Design

---

# 🛠 Hardware Used

| Component | Quantity |
|------------|----------|
| ESP32 Dev Board | 1 |
| ZMPT101B Voltage Sensor | 1 |
| LEDs | 3 |
| Breadboard | 1 |
| Resistors | As required |
| Jumper Wires | Several |
| USB Cable | 1 |

---

# 💻 Software Used

- Arduino IDE
- Blynk IoT
- ESP32 Board Package

---

# 🏗 System Architecture

<p align="center">

<img src="<img width="909" height="564" alt="Block_Diagram" src="https://github.com/user-attachments/assets/e72a74d1-f4d3-4957-bb20-a2fcb91ff52d" />
" width="800">

</p>

---

# 🔌 Circuit Diagram

<p align="center">

<img src="<img width="929" height="556" alt="Circuit_Diagram" src="https://github.com/user-attachments/assets/46a83b88-cc91-4c4d-8910-0ed5a739b41a" />
" width="800">

</p>

---

# ⚙ Working Principle

```text
AC Voltage
      │
      ▼
ZMPT101B Voltage Sensor
      │
      ▼
ESP32 Controller
      │
 ┌────┴─────────────┐
 │                  │
 ▼                  ▼
LED Indicators   Blynk Cloud
                     │
                     ▼
             Mobile Notification
```

### Step 1

The ZMPT101B sensor continuously measures the AC voltage.

### Step 2

ESP32 reads the analog voltage.

### Step 3

The measured voltage is calibrated.

### Step 4

ESP32 compares the value with predefined limits.

### Step 5

According to the voltage level:

🟢 Green LED → Normal

🟡 Yellow LED → Low Voltage

🔴 Red LED → High Voltage

### Step 6

Voltage data is uploaded to the Blynk Cloud.

### Step 7

The Blynk mobile application displays the voltage in real time.

### Step 8

If abnormal voltage is detected, a push notification is sent immediately.

---

# 📱 Blynk Dashboard

<p align="center">

<img src="<img width="959" height="472" alt="blynk_dashboard" src="https://github.com/user-attachments/assets/1982e34c-a745-4a63-be95-e11b34af9f3e" />
" width="350">

</p>

---

# 📊 Results

✔ Continuous Voltage Monitoring

✔ Real-Time Mobile Display

✔ Instant High Voltage Alert

✔ Instant Low Voltage Alert

✔ LED Status Indication

✔ Stable IoT Communication

---

# 🚀 Installation

## Clone Repository

```bash
[git clone https://github.com/Perseen-MP/IoT-Based-Voltage-Monitoring-Intimation-System.git](https://github.com/Perseen-MP/IoT-Based-Voltage-Monitoring-Intimation-System)
```

---

## Open Arduino IDE

Open

```
code/code.ino
```

---

## Install Libraries

- Blynk
- ESP32 Board Package

---

## Upload Code

Select

```
Board:
ESP32 Dev Module
```

Upload the sketch.

---

## Open Blynk App

Create a template

Copy

- Template ID
- Device Name
- Auth Token

Paste them into the code.

---

# 📂 Folder Structure

```
IoT-Voltage-Monitoring-System
│
├── Code
│   └── code.ino
│
├── Images
│   ├── project_setup.jpg
│   ├── circuit_diagram.png
│   ├── block_diagram.png
│   └── blynk_dashboard.jpg
└── README.md
```

---

# 🌍 Applications

🏠 Smart Homes

🏢 Industries

🏫 Laboratories

🏢 Smart Buildings

⚡ Appliance Protection

---

# 🚀 Future Improvements

- Relay-Based Protection
- Automatic Power Cut-Off
- Current Monitoring
- Power Consumption Analysis
- Cloud Data Logging
- Historical Graphs
- AI Fault Prediction

---

# 👨‍💻 Author

<div align="center">

## **Perseen M P**

Electrical and Electronics Engineering

IoT • ESP32 • Embedded Systems • Smart Energy

<a href="https://github.com/Perseen-MP">
<img src="https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github">
</a>

<a href="https://linkedin.com/in/perseen-m-p-498441374">
<img src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin">
</a>

</div>

---

<div align="center">

## ⭐ Star this repository if you found it helpful!

Made with ❤️ using **ESP32**, **Arduino IDE**, and **Blynk IoT**

</div>
