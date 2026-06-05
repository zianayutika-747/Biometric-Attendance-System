## Biometric Attendance System Using Arduino Uno
# Project Overview

This project presents a simulation-based Biometric Attendance System developed using Arduino Uno. Due to the absence of fingerprint sensor support in Wokwi, a push button is used to simulate biometric authentication. Attendance records are stored in EEPROM, ensuring data retention even after system reset.

#Features
* Simulated biometric authentication
* Automatic attendance recording
* EEPROM-based data storage
* Real-time monitoring through Serial Monitor
* Simple and lightweight implementation
# Components Required
* Arduino Uno
* Push Button
* LED
* 220Ω Resistor
* Jumper Wires
# Working

When the push button is pressed, the system treats it as a successful biometric verification. Attendance is recorded, stored in EEPROM, and displayed in the Serial Monitor. An LED indicates successful attendance marking.

# Uniqueness
* Fully compatible with Wokwi simulation.
* No specialized biometric hardware required.
* Demonstrates complete attendance logging workflow.
* Enables rapid testing and educational demonstrations.
# Limitations
* No actual fingerprint recognition.
* No individual user identification.
* Limited storage capacity due to EEPROM constraints.
* Designed primarily for simulation and learning purposes.
* Future Enhancements
* Integration of fingerprint sensors.
* Date and time logging using RTC.
Cloud-based attendance storage.
Web dashboard for attendance monitoring.
