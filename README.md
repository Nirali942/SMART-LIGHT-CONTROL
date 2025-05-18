#TASK-1
# Smart Light Control System

This project demonstrates a smart LED light control system using an Arduino UNO and a mobile app. The system allows the user to turn ON or OFF an LED via Bluetooth using an Android mobile app (like "Bluetooth Terminal" or a custom app created with MIT App Inventor).

## 🔧 Components Used

- Arduino UNO
- HC-05 Bluetooth Module
- LED
- 220-ohm Resistor
- Breadboard and Jumper Wires
- Android Phone with Bluetooth Terminal App

## 🔌 Circuit Diagram

1. **LED Circuit:**
   - Connect the LED's anode (+) to Arduino **digital pin 13** through a **220-ohm resistor**.
   - Connect the cathode (-) to **GND**.

2. **HC-05 Bluetooth Module:**
   - VCC → 5V
   - GND → GND
   - TX → RX (Pin 0)
   - RX → TX (Pin 1) *[Use voltage divider or 1kΩ+2kΩ resistors if needed]*

## 📱 App Commands

Use any Bluetooth terminal app and send the following commands:

- `ON`  → Turns the LED ON
- `OFF` → Turns the LED OFF

## 🚀 Uploading the Code

1. Disconnect the HC-05 TX/RX before uploading the code to Arduino.
2. Connect them again after uploading.
3. Pair your phone with HC-05 (Password: 1234 or 0000).
4. Use Bluetooth Terminal to send `ON` or `OFF`.


