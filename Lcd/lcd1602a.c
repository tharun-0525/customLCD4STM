/*
 * lcd1602a.c
 *
 *  Created on: Jul 22, 2025
 *      Author: tharu
 */

#include "lcd1602a.h"

void LCD_begin(int cols, int line, int mode){
	uint8_t display;
	if(mode==1){
		display= LCD_FOURDATA | LCD_ONELINE | LCD_TENDOT;
	}
	if(mode==2){
		display= LCD_EIGHTDATA | LCD_ONELINE | LCD_TENDOT;
	}
	
}



void send(char data){
	HAL_
}

void pulseEnable(){
	HAL_GPIO_WritePin(GPIOA, en, 0);
	HAL_Delay(0.001);
	HAL_GPIO_WritePin(GPIOA, en, 1);
	HAL_Delay(0.0005);
	HAL_GPIO_WritePin(GPIOA, en,0);
	HAL_Delay(0.1);
}
