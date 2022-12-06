/*
 * DIO_Configration.h
 *
 * Created: 10/11/2022 18:21:49
 *  Author: Computec
 */ 


#ifndef DIO_CONFIGRATION_H_
#define DIO_CONFIGRATION_H_

#include "Cpu_configration.h"
#include "DIO_Adress.h"

typedef enum
{
	DIO_PORTA = 0,
	DIO_PORTB = 1,
	DIO_PORTC = 2,
	DIO_PORTD = 3
}DIO_PORT;

typedef enum
{
	DIO_PIN0 = 0,
	DIO_PIN1 = 1,
	DIO_PIN2 = 2,
	DIO_PIN3 = 3,
	DIO_PIN4 = 4,
	DIO_PIN5 = 5,
	DIO_PIN6 = 6,
	DIO_PIN7 = 7
}DIO_PIN;

typedef enum
{
	DIO_Input = 0,
	DIO_output = 1

}DIO_State;

typedef enum
{
	DIO_LOW = 0,
	DIO_HIGH = 1
}DIO_Statues;

#endif /* DIO_CONFIGRATION_H_ */