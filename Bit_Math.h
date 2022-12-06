/*
 * Bit_Math.h
 *
 * Created: 10/11/2022 18:23:34
 *  Author: Computec
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define Set_Bit(Reg , Bit) Reg|=(1<<Bit)
#define Clr_Bit(Reg , Bit) Reg&=~(1<<Bit)
#define Togl_Bit(Reg , Bit) Reg^=(1<<Bit)
#define Get_Bit(Reg , Bit) ((Reg>>Bit)&1)

#endif /* BIT_MATH_H_ */