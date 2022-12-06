/*
 * TIMER_Interface.c
 *
 * Created: 19/11/2022 02:49:16
 *  Author: Computec
 */ 
#include "TIMER_Private.h"



/*static global to increased if Timer1 Register over Flow */
volatile static uint8_t TimerOverflow=0;


/*TIMER2 *****************************************************************************************/

void TIMER2_voidInit()
{
/*set TIMER2 Waveform Generation Mode:  Fast PWM Mode*/
Set_Bit(TCCR2,WGM20);
Set_Bit(TCCR2,WGM21);

/*Set Compare Match Output Mode Clear OC2 on compare match, set OC2 at TOP*/
Set_Bit(TCCR2,COM21);
Clr_Bit(TCCR2,COM20);

/*set Compare Value*/
OCR2 = 100;


/*Set TIMER2 prescaling: division by 64*/
/*first clear he three Clock Select bits select the clock source to be used by the Timer/Counter*/
TCCR2 &= 0b11111000;

TCCR2 |= 4;
}

/*TIMER1**************************************************************/

void TIMER1_ISR(void)
{
	TimerOverflow ++;	// Increment Timer Overflow count 
}


void timer1_init(void)
{
	//Enable interbut
	Set_Bit(TIMSK,TOIE1);
	 //Set all bit to zero Normal operation 
	TCCR1A = 0;
	TCCR1B = 0;
}
uint32_t ReturnTime(void)
{
	uint32_t Time_for_echo;
	TCNT1 = 0;             //clear timer counter
	TCCR1B = 0x41;	      // Capture on rising edge, No prescaler
	Set_Bit(TIFR,ICF1);   // Clear ICP flag (Input Capture flag) 
	Set_Bit(TIFR,TOV1);   // Clear Timer Overflow flag 
	while(Get_Bit(TIFR,ICF1)!=1);  //Wait for rising edge
	TCNT1 = 0;	                  // Clear Timer counter 
	TCCR1B = 0x01;	              // Capture on falling edge, No prescaler
	Set_Bit(TIFR,ICF1);   // Clear ICP flag (Input Capture flag)
	Set_Bit(TIFR,TOV1);   // Clear Timer Overflow flag
	TimerOverflow = 0;     // clear timer over flow counter
	while(Get_Bit(TIFR,ICF1)!=1);  //Wait for falling edge
	Time_for_echo = ( ICR1 + ( 65535 * TimerOverflow) ) / 16 ;
	return Time_for_echo;
}
// TIMER1 OVER FLOW ISR
void __vector_9(void)				__attribute__((signal));
void __vector_9(void)
{
	TIMER1_ISR();
}
