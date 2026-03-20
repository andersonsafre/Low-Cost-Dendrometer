# Low-Cost Arduino-Based Dendrometer System

![System overview](docs/overview.jpg)

*Figure 1. Low-cost dendrometer system including Arduino datalogger and sensor.*

This repository contains all hardware and software required to reproduce the low-cost dendrometer system described in:

**Development and Evaluation of a Low-Cost Dendrometer System for Agricultural and Research Applications**

---

## 🔧 Hardware Overview

The system consists of:
- Arduino Pro Mini (3.3V, ATmega328P)
- Linear potentiometer (TT Electronics Model 404)
- DS3231 RTC module
- MicroSD card module
- 18650 Li-ion batteries

### 📷 Wiring Diagram
See: hardware/wiring_diagram.png

### 🔩 Mounting Bracket 
See: hardware/dendro_bracket_v1.pdf
---

## 📦 Bill of Materials (BOM)

Available in:
bom/bill_of_materials.csv

## ⚙️ Firmware

Located in:
firmware/dendrometer_logger.ino

### Libraries used:
- LowPower by LowPowerLab (version 2.2.0)
- RTClib by Adafruit (version  2.1.4)
- SD (Arduino standard library version 1.2.4)

---

## 📊 Data Processing

Scripts for computing SDV and MDS are located in:
data_processing/sdv_mds_processing.pynb

## 🔁 Reproducibility

This repository includes:
- Firmware
- Wiring diagram
- BOM
- Data processing scripts

to ensure full reproducibility of the system.

---
