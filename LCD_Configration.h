/*
 * LCD_Configration.h
 *
 * Created: 14/11/2022 17:46:37
 *  Author: Computec
 */ 


#ifndef LCD_CONFIGRATION_H_
#define LCD_CONFIGRATION_H_

#include "CPU_Configration.h"

#define LCD              PORTA
#define LCD_cntrl_prt    DIO_PORTB
#define LCD_data_prt     DIO_PORTA
#define LCD_D0           DIO_PIN4
#define LCD_D1           DIO_PIN5
#define LCD_D2           DIO_PIN6
#define LCD_D3           DIO_PIN7
#define LCD_D4           DIO_PIN4
#define LCD_D5           DIO_PIN5
#define LCD_D6           DIO_PIN6
#define LCD_D7           DIO_PIN7
#define LCD_RS           DIO_PIN1
#define LCD_RW           DIO_PIN2
#define LCD_EN           DIO_PIN4
#define LCD_OUT          DIO_output
#define LCD_LOW          DIO_LOW
#define LCD_HIGH         DIO_HIGH

#endif /* LCD_CONFIGRATION_H_ */