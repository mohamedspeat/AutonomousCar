/*
* Servo_Inerface.c
*
* Created: 14/11/2022 21:22:14
*  Author: Computec
*/
#include "Servo_Private.h"

void ServoMotor_Initialize(void)
{
	//Define Direction for OCR0 pin as output
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
