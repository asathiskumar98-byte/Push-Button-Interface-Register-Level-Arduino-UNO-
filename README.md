# 🔘 Push Button Interface — Register-Level (Arduino UNO)

This project demonstrates how to interface a **push button switch** with the **Arduino UNO (ATmega328P)** using **register-level programming**, without any Arduino functions.

---

## ⚙️ Hardware Used
- Arduino UNO (ATmega328P)
- Push Button Switch
- LED (for output indication)
- 220Ω Resistor (LED current limit)
- Optional: Pull-down resistor (if not using internal pull-up)

---

## 🔌 Pin Configuration

| Component | Function | Arduino Pin | Port |
|------------|-----------|--------------|------|
| Push Button | Input | D2 | PD2 |
| LED | Output | D12 | PB4 |
| VCC | Power | +5V | — |
| GND | Ground | GND | — |

---

## 🧩 Code Explanation
- `DDRB |= (1 << DDB4)` → Configures PB4 as **output** (LED).  
- `DDRD &= ~(1 << DDD2)` → Configures PD2 as **input** (button).  
- `PORTD |= (1 << PD2)` → Activates **internal pull-up** resistor.  
- Logic check:
  - **Pressed (LOW)** → LED ON  
  - **Released (HIGH)** → LED OFF

---

## ⚙️ Working Principle
1. When the button is pressed, PD2 goes **LOW**, LED turns **ON**.  
2. When released, PD2 goes **HIGH** (via pull-up), LED turns **OFF**.  

---

## 🧰 Build & Upload
1. Compile using **AVR-GCC**, **Atmel Studio**, or **PlatformIO**.  
2. Upload the HEX file to Arduino UNO.  
3. Watch the LED respond instantly to button presses.
