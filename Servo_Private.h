/*
 * Servo_Private.h
 *
 * Created: 14/11/2022 21:21:55
 *  Author: Computec
 */ 


#ifndef SERVO_PRIVATE_H_
#define SERVO_PRIVATE_H_

#include "Servo_Configration.h"

void ServoMotor_Initialize(void);
void ServoMotor_Rotate(Fint32_t angle);

#endif /* SERVO_PRIVATE_H_ */