/*
 * HCSR04_Configration.h
 *
 * Created: 19/11/2022 02:56:07
 *  Author: Computec
 */ 


#ifndef HCSR04_CONFIGRATION_H_
#define HCSR04_CONFIGRATION_H_

#include "CPU_Configration.h"

#define HCSR04_TRIG_PORT			DIO_PORTD
#define HCSR04_TRIG_PIN				DIO_PIN3

#define HCSR04_ECHO_PORT            DIO_PORTD
#define HCSR04_ECHO_PIN             DIO_PIN6  

#define HCSR04_Out   DIO_output
#define HCSR04_in   DIO_Input


#define HCSR04_HIGH   DIO_HIGH
#define HCSR04_Low    DIO_LOW


#endif /* HCSR04_CONFIGRATION_H_ */