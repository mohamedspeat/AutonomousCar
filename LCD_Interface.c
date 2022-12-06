/*
* LCD_Interface.c
*
* Created: 14/11/2022 17:47:04
*  Author: Computec
*/
#include "LCD_Private.h"

void LCD_initializing(void)
{
	DIO_SetPin_Direction(LCD_cntrl_prt,LCD_EN,LCD_OUT);
	DIO_SetPin_Direction(LCD_cntrl_prt,LCD_RS,LCD_OUT);
	DIO_SetPin_Direction(LCD_cntrl_prt,LCD_RW,LCD_OUT);
	
	DIO_SetPin_Direction(LCD_data_prt,LCD_D4,LCD_OUT);
	DIO_SetPin_Direction(LCD_data_prt,LCD_D5,LCD_OUT);
	DIO_SetPin_Direction(LCD_data_prt,LCD_D6,LCD_OUT);
	DIO_SetPin_Direction(LCD_data_prt,LCD_D7,LCD_OUT);
	
	LCD_write_command(0x33);
	LCD_write_command(0x32);
	LCD_write_command(0x28);
	LCD_write_command(0x01); // clear display screen
	LCD_write_command(0x02); //  return home
	LCD_write_command(0x06); // shift cursor to right
	LCD_write_command(0x0C); // display on , cursor off
}
void LCD_write_command(uint8_t command)
{
	//select the command register
	DIO_SetPin_value(LCD_cntrl_prt,LCD_RS,LCD_LOW);
	//select write on screen
	DIO_SetPin_value(LCD_cntrl_prt,LCD_RW,LCD_LOW);
	//insure that enable is low
	DIO_SetPin_value(LCD_cntrl_prt,LCD_EN,LCD_LOW);
	// send the high nibble
	LCD=(command & 0xF0);
	DIO_SetPin_value(LCD_cntrl_prt,LCD_EN,LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_value(LCD_cntrl_prt,LCD_EN,LCD_LOW);
	//send low nibble
	LCD=(command & 0x0F)<<4;
	DIO_SetPin_value(LCD_cntrl_prt,LCD_EN,LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_value(LCD_cntrl_prt,LCD_EN,LCD_LOW);
	_delay_ms(2);
}
void LCD_write_character(uint8_t character)
{
	//select the data register
	DIO_SetPin_value(LCD_cntrl_prt,LCD_RS,LCD_HIGH);
	//select write on screen
	DIO_SetPin_value(LCD_cntrl_prt,LCD_RW,LCD_LOW);
	//insure that enable is low
	DIO_SetPin_value(LCD_cntrl_prt,LCD_EN,LCD_LOW);
	// send the high nibble
	LCD=(character & 0xF0);
	DIO_SetPin_value(LCD_cntrl_prt,LCD_EN,LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_value(LCD_cntrl_prt,LCD_EN,LCD_LOW);
	//send low nibble
	LCD=(character & 0x0F)<<4;
	DIO_SetPin_value(LCD_cntrl_prt,LCD_EN,LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_value(LCD_cntrl_prt,LCD_EN,LCD_LOW);
	_delay_ms(2);
}
void LCD_write_string(uint8_t* str)
{
	while(*str!='\0')
	{
		LCD_write_character(*str);
		_delay_ms(2);
		str++;
		
	}
}
void LCD_write_num(Uint32_t number)
{
	char num[10];
	ltoa(number, (char*)num, 10);
	LCD_write_string((uint8_t*)num);
	
}
void LCD_Clear(void)
{
	LCD_write_command (0x01);
}
void lcd_goto_xy (uint8_t line,uint8_t pos)				//line = 0 or 1
{
	LCD_write_command((0x80|(line<<6))+pos);
	_delay_us (50);
}