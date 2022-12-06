/*
 * CPU_Configration.h
 *
 * Created: 10/11/2022 18:24:22
 *  Author: Computec
 */ 


#ifndef CPU_CONFIGRATION_H_
#define CPU_CONFIGRATION_H_

#undef F_CPU
#define F_CPU 16000000
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "Bit_Math.h"
#include "Standard_Types.h"
#include "DIO_Private.h"
#include "TIMER_Private.h"


#endif /* CPU_CONFIGRATION_H_ */