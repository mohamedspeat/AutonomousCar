/*
* final project.c
*
* Created: 10/11/2022 18:19:24
* Author : Computec
*/

#include <avr/io.h>
#include "main.h"

#define DELAY    200
int main(void)
{
	
	Uint16_t F_Distance;   // Forward distance
	Uint16_t R_Distance;   // Right distance
	Uint16_t L_Distance;   // left distance
	ServoMotor_Initialize();
	ServoMotor_Rotate(ANGLE0);
	_delay_ms(DELAY);
	timer1_init();         //TO control HCSR04  
	TIMER2_voidInit();     //to control speed
	sei();  // ENABLE GLOBAL INTERRPUT
	HCSR04_init();
	LCD_initializing();
	L293D_init();
	while(1){
		
		F_Distance = Get_distance();
		if(F_Distance > 30)
		{
		lcd_goto_xy(0,0);
		LCD_write_string((uint8_t*)"car go forward");
		lcd_goto_xy(1,1);
		LCD_write_string((uint8_t*)"FD = ");
		LCD_write_num(F_Distance);
		LCD_write_string((uint8_t*)"cm");
		L293D_Forward(); //car go forward
		}
		else if((F_Distance < 30)&&(F_Distance <=15))
		{
		L293D_off();
		_delay_ms(DELAY);
		LCD_Clear();
		lcd_goto_xy(0,0);
		LCD_write_string((uint8_t*)"car turn 180");
		lcd_goto_xy(1,1);
		LCD_write_string((uint8_t*)"FD = ");
		LCD_write_num(F_Distance);
		LCD_write_string((uint8_t*)"cm");
		L293D_Turn180(); //car turn 180
		}
		else if ((F_Distance <= 30) && (F_Distance >15))
		{
		L293D_off();
		_delay_ms(DELAY);
		LCD_Clear();
		ServoMotor_Rotate(ANGLEP90);
		_delay_ms(DELAY);
		R_Distance = Get_distance();
		ServoMotor_Rotate(ANGLEN90);
		_delay_ms(DELAY);
		L_Distance = Get_distance();
		ServoMotor_Rotate(ANGLE0);
		_delay_ms(DELAY);
		if(L_Distance > R_Distance)
		{
		LCD_Clear();
		lcd_goto_xy(0,0);
		LCD_write_string((uint8_t*)"car turn left");
		lcd_goto_xy(1,1);
		LCD_write_string((uint8_t*)"LD = ");
		LCD_write_num(L_Distance);
		LCD_write_string((uint8_t*)"cm");
		L293D_TurnLeft();
		L293D_off();
		_delay_ms(DELAY);
		}
		else if(R_Distance >=L_Distance)
		{
		LCD_Clear();
		lcd_goto_xy(0,0);
		LCD_write_string((uint8_t*)"car turn right");
		lcd_goto_xy(1,1);
		LCD_write_string((uint8_t*)"RD = ");
		LCD_write_num(R_Distance);
		LCD_write_string((uint8_t*)"cm");
		L293D_TurnRight();
		L293D_off();
		_delay_ms(DELAY);
		}
		}
		//Reast all distanc
		F_Distance = 0;
		L_Distance = 0;
		R_Distance = 0;
	}

	return 0;
}
