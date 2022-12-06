/*
* L293D_Interface.c
*
* Created: 16/11/2022 20:08:08
*  Author: Computec
*/
#include "L293D_Private.h"

void L293D_init(void)
{
	DIO_SetPin_Direction(L293D_Port,L293D_out1,L293_Output);
	DIO_SetPin_Direction(L293D_Port,L293D_out2,L293_Output);
	DIO_SetPin_Direction(L293D_Port,L293D_out3,L293_Output);
	DIO_SetPin_Direction(L293D_Port,L293D_out4,L293_Output);
}
void L293D_Forward(void)
{
	DIO_SetPin_value(L293D_Port,L293D_out1,L293_low);
	DIO_SetPin_value(L293D_Port,L293D_out2,L293_HIGH);
	DIO_SetPin_value(L293D_Port,L293D_out3,L293_low);
	DIO_SetPin_value(L293D_Port,L293D_out4,L293_HIGH);
}
void L293D_Reverse(void)
{
	DIO_SetPin_value(L293D_Port,L293D_out1,L293_HIGH);
	DIO_SetPin_value(L293D_Port,L293D_out2,L293_low);
	DIO_SetPin_value(L293D_Port,L293D_out3,L293_HIGH);
	DIO_SetPin_value(L293D_Port,L293D_out4,L293_low);
	_delay_ms(850);
}
void L293D_TurnRight(void)
{
	DIO_SetPin_value(L293D_Port,L293D_out1,L293_low);
	DIO_SetPin_value(L293D_Port,L293D_out2,L293_HIGH);
	DIO_SetPin_value(L293D_Port,L293D_out3,L293_HIGH);
	DIO_SetPin_value(L293D_Port,L293D_out4,L293_low);
	_delay_ms(375);
}
void L293D_TurnLeft(void)
{
	DIO_SetPin_value(L293D_Port,L293D_out1,L293_HIGH);
	DIO_SetPin_value(L293D_Port,L293D_out2,L293_low);
	DIO_SetPin_value(L293D_Port,L293D_out3,L293_low);
	DIO_SetPin_value(L293D_Port,L293D_out4,L293_HIGH);
	_delay_ms(375);
}
void L293D_Turn180(void)
{
	DIO_SetPin_value(L293D_Port,L293D_out1,L293_low);
	DIO_SetPin_value(L293D_Port,L293D_out2,L293_HIGH);
	DIO_SetPin_value(L293D_Port,L293D_out3,L293_HIGH);
	DIO_SetPin_value(L293D_Port,L293D_out4,L293_low);
	_delay_ms(800);
}
void L293D_off(void)
{
	DIO_SetPin_value(L293D_Port,L293D_out1,L293_low);
	DIO_SetPin_value(L293D_Port,L293D_out2,L293_low);
	DIO_SetPin_value(L293D_Port,L293D_out3,L293_low);
	DIO_SetPin_value(L293D_Port,L293D_out4,L293_low);
}