/*
 * L293D_Private.h
 *
 * Created: 16/11/2022 20:07:48
 *  Author: Computec
 */ 


#ifndef L293D_PRIVATE_H_
#define L293D_PRIVATE_H_

#include "L293D_Configration.h"

void L293D_init(void);
void L293D_Forward(void);
void L293D_Reverse(void);
void L293D_TurnRight(void);
void L293D_TurnLeft(void);
void L293D_Turn180(void);
void L293D_off(void);

#endif /* L293D_PRIVATE_H_ */