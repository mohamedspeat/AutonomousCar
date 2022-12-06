/*
 * DIO_Private.h
 *
 * Created: 10/11/2022 18:22:03
 *  Author: Computec
 */ 


#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#include "DIO_Configration.h"
void DIO_SetPin_Direction(DIO_PORT port, DIO_PIN pin, DIO_State state);
void DIO_SetPin_value(DIO_PORT port, DIO_PIN pin, DIO_Statues statues);
void DIO_TogglePin_value(DIO_PORT port, DIO_PIN pin);
uint8_t DIO_ReadPin_value(DIO_PORT port, DIO_PIN pin);
void DIO_SetPin_pullup(DIO_PORT port, DIO_PIN pin);

#endif /* DIO_PRIVATE_H_ */