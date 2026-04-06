# Low-Cost Arduino-Based Dendrometer System

## License
- Software: MIT License
- Hardware: CERN-OHL-P



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
See: hardware/wiring_diagram.jpg

### 🔩 Mounting Bracket 

See: hardware/wiring_diagram.jpg
---

## 📦 Bill of Materials (BOM) 


| Item | Description | Cost (USD) |
|------|------------|------------|
| Arduino Pro Mini | 3.3V ATmega328 | 5 |
| Linear Displacement Sensor | BI Model 404 | 23 |
| RTC Module | DS3231 | 2 |
| MicroSD Module | pzsmocn 3.3V | 6 |
| MicroSD Card | 16 GB | 10 |
| Battery | 2 × 18650 (3.5 Ah) | 8 |
| Jumper Wires | Standard set | 6 |
| Battery Holder | 18650 holder | 1 |
| Enclosure | Waterproof ABS electrical box | 6 |
| Coin Cell Battery | CR2032 | 4 |
| Bracket | Aluminum | 2 |
| **Total** |  | **73** |


Available in:
bom/bill_of_materials.csv

*Note: Component prices were last verified in March 2026 based on typical online retail sources (e.g., Amazon, DigiKey, 18650 Battery store) and may vary with supplier, quantity, and market conditions.*

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
data_processing/sdv_mds_processing.ipynb

## 🔁 Reproducibility

This repository includes:
- Firmware
- Wiring diagram
- BOM
- Data processing scripts

to ensure full reproducibility of the system.

---
