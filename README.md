# 📘 CustomLCD4STM

**Custom LCD Driver Development for STM32 Microcontroller (HD44780 16x2 in 4-bit mode)**

---

## 📝 Project Description

This project demonstrates the development of a **custom driver** to interface an **HD44780-compatible 16x2 character LCD** with an **STM32 microcontroller** . 

this driver is written **from scratch** to provide a deeper understanding of:

- Bitwise manipulation  
- LCD command protocols  
- Embedded C modular design  

---

## 🎯 Key Features

- ✅ 4-bit communication mode (saves GPIO pins)  
- ✅ Send **commands** and **data** to the LCD  
- ✅ Display and cursor shift functionality  
- ✅ Entry mode configuration  
- ✅ Display ON/OFF, cursor ON/OFF, blink control  
- ✅ Clear display and return home functions  
- ✅ Modular code for easy reuse and portability

---

## 🧰 Tools and Components

- **Microcontroller**: STM32 (tested on STM32F303RE "nucleo")  
- **Display**: HD44780 16x2 LCD
- **Language**: Embedded C  
- **IDE**: STM32CubeIDE
- **No HAL LCD utility used** – fully custom implementation

---
