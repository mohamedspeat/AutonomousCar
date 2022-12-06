/*
 * LCD_Private.h
 *
 * Created: 14/11/2022 17:46:53
 *  Author: Computec
 */ 


#ifndef LCD_PRIVATE_H_
#define LCD_PRIVATE_H_

#include "LCD_Configration.h"

void LCD_initializing(void);
void LCD_write_command(uint8_t command);
void LCD_write_character(uint8_t character);
void LCD_write_string(uint8_t* str);
void LCD_write_num(Uint32_t number);
void LCD_Clear(void);
void lcd_goto_xy (uint8_t line,uint8_t pos);


#endif /* LCD_PRIVATE_H_ */