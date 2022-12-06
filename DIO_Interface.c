/*
 * DIO_Interface.c
 *
 * Created: 10/11/2022 18:22:18
 *  Author: Computec
 */ 
#include "DIO_Private.h"
void DIO_SetPin_Direction(DIO_PORT port, DIO_PIN pin, DIO_State state){
	switch(state){
		case DIO_Input:
		switch(port){
			case DIO_PORTA:
			Clr_Bit(DDRA, pin);
			break;
			case DIO_PORTB:
			Clr_Bit(DDRB, pin);
			break;
			case DIO_PORTC:
			Clr_Bit(DDRC, pin);
			break;
			case DIO_PORTD:
			Clr_Bit(DDRD, pin);
			break;
		}
		break;
		case DIO_output:
		switch(port){
			case DIO_PORTA:
			Set_Bit(DDRA, pin);
			break;
			case DIO_PORTB:
			Set_Bit(DDRB, pin);
			break;
			case DIO_PORTC:
			Set_Bit(DDRC, pin);
			break;
			case DIO_PORTD:
			Set_Bit(DDRD, pin);
			break;
		}
		break;
	}
}
void DIO_SetPin_value(DIO_PORT port, DIO_PIN pin, DIO_Statues statues){
	switch(statues){
		case DIO_LOW:
		switch(port){
			case DIO_PORTA:
			Clr_Bit(PORTA, pin);
			break;
			case DIO_PORTB:
			Clr_Bit(PORTB, pin);
			break;
			case DIO_PORTC:
			Clr_Bit(PORTC, pin);
			break;
			case DIO_PORTD:
			Clr_Bit(PORTD, pin);
			break;
		}
		break;
		case DIO_HIGH:
		switch(port){
			case DIO_PORTA:
			Set_Bit(PORTA, pin);
			break;
			case DIO_PORTB:
			Set_Bit(PORTB, pin);
			break;
			case DIO_PORTC:
			Set_Bit(PORTC, pin);
			break;
			case DIO_PORTD:
			Set_Bit(PORTD, pin);
			break;
		}
		break;
	}
}
void DIO_TogglePin_value(DIO_PORT port, DIO_PIN pin){
	switch(port){
		case DIO_PORTA:
		Togl_Bit(PORTA, pin);
		break;
		case DIO_PORTB:
		Togl_Bit(PORTB, pin);
		break;
		case DIO_PORTC:
		Togl_Bit(PORTC, pin);
		break;
		case DIO_PORTD:
		Togl_Bit(PORTD, pin);
		break;
	}
}
uint8_t DIO_ReadPin_value(DIO_PORT port, DIO_PIN pin){
	uint8_t val = 0;
	switch(port){
		case DIO_PORTA:
		val = Get_Bit(PINA, pin);
		break;
		case DIO_PORTB:
		val = Get_Bit(PINB, pin);
		break;
		case DIO_PORTC:
		val = Get_Bit(PINC, pin);
		break;
		case DIO_PORTD:
		val = Get_Bit(PIND, pin);
		break;
	}
	return val;
}
void DIO_SetPin_pullup(DIO_PORT port, DIO_PIN pin){
	switch(port){
		case DIO_PORTA:
		Set_Bit(PORTA, pin);
		break;
		case DIO_PORTB:
		Set_Bit(PORTB, pin);
		break;
		case DIO_PORTC:
		Set_Bit(PORTC, pin);
		break;
		case DIO_PORTD:
		Set_Bit(PORTD, pin);
		break;
	}
}

