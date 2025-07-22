#ifdef lcd1602a_h
#define lcd1602a_h

#include <stdio.h>
#include "stm32f3xx_hal.h"

#define LCD_CLEAR 0x01
#define LCD_HOME LCD_HOME << 1

//Mode
#define LCD_ENTRYMODE 0x04
#define LCD_DISPLAYCONTROL 0x08
#define LCD_CURSORCONTROL 0x10
#define LCD_FUNCTIONSET 0x20
#define LCD_CGRAMADRR 0x40
#define LCD_DDRAMADRR 0x80
#define LCD_READBUSYFLAG 0x100

//Entry
#define LCD_ENTRYRIGHT 0x00
#define LCD_ENTRYLEFT 0x02
#define LCD_SHIFTON 0x01
#define LCD_SHIFTOFF 0x00

//Display
#define LCD_DISPLAYON 0x04
#define LCD_DISPLAYOFF 0x00
#define LCD_CURSORON 0x02
#define LCD_CURSONOFF 0x00
#define LCD_BLINKON 0x01
#define LCD_BLINKOFF 0x00

//Cursor
#define LCD_DISPLAYMOV 0x08
#define LCD_CURSORMOV 0x00
#define LCD_RIGHTMOV 0x04
#define LCD_LEFTMOV 0x00

//Function
#define LCD_EIGHTDATA 0x10
#define LCD_FOURDATA 0x00
#define LCD_ONELINE 0x08
#define LCD_TWOLINE 0x00
#define LCD_TENDOTFONT 0x04
#define LCD_SEVENDOTFONT 0x00

//pins
#define rs GPIO_PIN_0
#define rw GPIO_PIN_1
#define en GPIO_PIN_2
#define d0 GPIO_PIN_3
#define d1 GPIO_PIN_4
#define d2 GPIO_PIN_5
#define d3 GPIO_PIN_6
#define d4 GPIO_PIN_7
#define d5 GPIO_PIN_8
#define d6 GPIO_PIN_9
#define d7 GPIO_PIN_10


void pulseEnable();
void write4bit();
void write8bit();

void LCD_init(int mode);
void LCD_clear();
void LCD_send(char data);

