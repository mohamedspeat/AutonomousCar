/*
* HCSR04_Inerface.c
*
* Created: 19/11/2022 02:57:02
*  Author: Computec
*/
#include "HCSR04_Private.h"

void HCSR04_init(void)
{
	DIO_SetPin_Direction(HCSR04_TRIG_PORT,HCSR04_TRIG_PIN,HCSR04_Out);
	DIO_SetPin_Direction(HCSR04_ECHO_PORT,HCSR04_ECHO_PIN,HCSR04_in);
	//DIO_SetPin_pullup(HCSR04_ECHO_PORT,HCSR04_ECHO_PIN);
}
Uint16_t Get_distance(void)
{
	uint32_t TIME;
	Uint16_t Distance;
	DIO_SetPin_value(HCSR04_TRIG_PORT,HCSR04_TRIG_PIN,HCSR04_Low);
	_delay_us(5);
	DIO_SetPin_value(HCSR04_TRIG_PORT,HCSR04_TRIG_PIN,HCSR04_HIGH);
	_delay_us(10);
	DIO_SetPin_value(HCSR04_TRIG_PORT,HCSR04_TRIG_PIN,HCSR04_Low);
	TIME = ReturnTime();
	Distance = (uint16_t)( TIME * (0.034 / 2) );
	return Distance;
}