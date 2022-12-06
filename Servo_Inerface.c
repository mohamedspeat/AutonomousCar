/*
* Servo_Inerface.c
*
* Created: 14/11/2022 21:22:14
*  Author: Computec
*/
#include "Servo_Private.h"
/*
void Servo_init(void)
{
	DIO_SetPin_Direction(Servo_Port,Servo_pin,DIO_output);
}


/* Three Function To Set (Angel 0 Degree , Angel 90 Degree , Angel 180 Degree) */
/*static void ANGLE90_ISR(void);
static void ANGLE0_ISR(void);
static void ANGLE180_ISR(void);*/

/*
uint8_t Servo_Rotat(uint8_t Copy_u8RequiredAngle)
{
	uint8_t Local_u8ErrorState =OK;
	switch(Copy_u8RequiredAngle)
	{
		case 0   : TIMER0_u8SetCallBack(&ANGLE0_ISR);        break;
		case 90  : TIMER0_u8SetCallBack(&ANGLE90_ISR);       break;
		case 180 : TIMER0_u8SetCallBack(&ANGLE180_ISR);      break;
		default  : Local_u8ErrorState = ANGLE_ERR;           break;
	}


	return Local_u8ErrorState;

}




static void ANGLE90_ISR(void)
{
	static uint8_t Local_u8Counter=0;
	Local_u8Counter++;
	if(Local_u8Counter == 1)
	{
		DIO_SetPin_value(Servo_Port,Servo_pin,DIO_HIGH);
	}
	else if(Local_u8Counter == 12)
	{
		DIO_SetPin_value(Servo_Port,Servo_pin,DIO_LOW);
	}
	else if(Local_u8Counter == 160)
	{
		DIO_SetPin_value(Servo_Port,Servo_pin,DIO_HIGH);
		Local_u8Counter=0;

	}
}

static void ANGLE0_ISR(void)
{
	static uint8_t Local_u8Angle0Counter=0;
	Local_u8Angle0Counter++;

	if(Local_u8Angle0Counter == 1)
	{
		DIO_SetPin_value(Servo_Port,Servo_pin,DIO_HIGH);
	}
	else if(Local_u8Angle0Counter == 7)
	{
		DIO_SetPin_value(Servo_Port,Servo_pin,DIO_LOW);
	}
	else if(Local_u8Angle0Counter == 160)
	{
		DIO_SetPin_value(Servo_Port,Servo_pin,DIO_HIGH);
		Local_u8Angle0Counter=0;

	}

}

static void ANGLE180_ISR(void)
{
	static uint8_t Local_u8Angle180Counter=0;
	Local_u8Angle180Counter++;

	if(Local_u8Angle180Counter == 1)
	{
		DIO_SetPin_value(Servo_Port,Servo_pin,DIO_HIGH);
	}
	else if(Local_u8Angle180Counter == 18)
	{
		DIO_SetPin_value(Servo_Port,Servo_pin,DIO_LOW);
	}
	else if(Local_u8Angle180Counter == 160)
	{
		DIO_SetPin_value(Servo_Port,Servo_pin,DIO_HIGH);
		Local_u8Angle180Counter=0;

	}

}*/
void ServoMotor_Initialize(void)
{
	//Define Direction for OCR2 pin as output
	Set_Bit(DDRB, PB3);
	//Choose mode from timer0 modes
	Set_Bit(TCCR0, WGM01);Set_Bit(TCCR0, WGM00);
	//Choose non-inverting mode
	Set_Bit(TCCR0, COM01);Clr_Bit(TCCR0, COM00);
	//Choose Prescaler
	Set_Bit(TCCR0, CS02);Clr_Bit(TCCR0, CS01);Clr_Bit(TCCR0, CS00);
	//Set new top value
	ICR1 = 1250;
}
void ServoMotor_Rotate(Fint32_t angle)
{
	OCR0 = ((ICR1 * angle) / 100) - 1;
}