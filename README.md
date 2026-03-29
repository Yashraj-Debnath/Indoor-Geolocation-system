# RF-Based Indoor Geolocation System

## 📌 Overview

This project implements a **low-cost indoor positioning and navigation system** using **433 MHz RF communication**, eliminating the need for GPS in indoor environments. The system uses distributed RF transmitters and a receiver to detect zones and guide movement.

---

## 🚀 Features

* 📡 **GPS-independent indoor localization**
* 🔁 **Real-time zone detection and navigation**
* 💡 **Low-cost implementation using off-the-shelf RF modules**
* 🧠 **Distributed decision-making (no centralized computation)**

---

## 🏗️ System Architecture

### 🔹 Transmitter Node

* Arduino UNO generates zone-specific identifiers (e.g., "ZONE_A")
* Encodes data using **HT12E encoder**
* Transmits via **433 MHz RF module (ASK modulation)**

### 🔹 Receiver Node

* Receives RF signals using **433 MHz RF receiver**
* Decodes using **HT12D decoder / RadioHead library**
* Processes data and determines user location
* Outputs navigation instructions via Serial Monitor

---

## 🔄 Working Principle

1. Transmitter broadcasts a **zone identifier** continuously
2. Receiver captures RF signal and decodes message
3. System determines **current zone**
4. Navigation logic compares with destination
5. Outputs next movement instruction

---

## 🧠 Navigation Logic

* Each zone acts as a **local decision node**
* Uses a **lookup-based approach** instead of full path computation

Example:

```
ZONE_A → Move Right → ZONE_B → Move Forward → ZONE_C
```

---

## 🔧 Hardware Components

* Arduino UNO (x2)
* 433 MHz RF Transmitter & Receiver modules
* HT12E Encoder IC
* HT12D Decoder IC
* DIP switches (for address configuration)
* Breadboard & connecting wires

---

## 💻 Software & Tools

* Arduino IDE
* RadioHead Library (for RF communication)

---

## 📡 Communication Details

* Frequency: **433 MHz**
* Modulation: **ASK (Amplitude Shift Keying)**
* Data Encoding: Serial data → RF transmission → Decoding

---

## 📊 Results

* Reliable indoor communication achieved
* Accurate **zone detection and navigation output**
* Real-time response observed via Serial Monitor

---

## 📈 Future Improvements

* RSSI-based distance estimation
* Multi-node triangulation for precise positioning
* Mobile app integration for visualization
* Integration with maps for real-time navigation

---

## 📂 Project Structure

```
/geolocation-system
├── transmitter/
│   └── transmitter.ino
├── receiver/
│   └── receiver.ino
├── docs/
│   └── report.pdf
└── README.md
```


## ⭐ Acknowledgements

* Arduino Community
* RadioHead Library Documentation

---

## 📜 License

This project is for academic and educational purposes.
