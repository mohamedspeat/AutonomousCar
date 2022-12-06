/*
 * TIMER_Private.h
 *
 * Created: 19/11/2022 02:48:42
 *  Author: Computec
 */ 


#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

#include "TIMER_Configration.h"



/*TIMER2 *****************************************************************************************/

void TIMER2_voidInit();


/*TIMER1 *****************************************************************************************/

void timer1_init(void);
uint32_t ReturnTime(void);

#endif /* TIMER_PRIVATE_H_ */