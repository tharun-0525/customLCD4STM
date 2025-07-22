📘 Project Title:
Custom LCD Driver Development for STM32 Microcontroller (HD44780 16x2 in 4-bit mode)

📝 Project Description:

This project involves the step-by-step development of a custom driver to interface an HD44780-compatible 16x2 LCD with an STM32 microcontroller using 4-bit mode. The goal is to build a lightweight, modular, and reusable driver from scratch without relying on external libraries like HAL’s LCD utilities.

The project is designed to enhance low-level understanding of microcontroller peripheral control, bitwise operations, GPIO configuration, and LCD communication protocols.

The driver will support core functionalities such as:

Sending data/commands in 4-bit mode
Cursor and display shifting
Entry mode configuration
Clear display, return home, and display control

Special emphasis is placed on:

Precise control of timing signals (especially the Enable pulse)

Pin-mode configuration and manual GPIO toggling

User-defined abstraction layers, allowing customizable pin mappings and reusable API functions

Clean file structure with user-accessible and internal static functions