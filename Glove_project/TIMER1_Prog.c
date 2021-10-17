/*
 * TIMER1_prog.c
 *
 *  Created on: Sep 16, 2021
 *      Author: HP
 */

#include "MathUtils.h"
#include "STD_types.h"
#include "DIO_int.h"
#include "TIMER1_Reg.h"
#include "TIMER1_init.h"



void TIMER1_init(void)
{
	// set clear on compare match
	SET_BIT(TCCR1A,TCCR1A_COM1A1);
	CLR_BIT(TCCR1A,TCCR1A_COM1A0);

	//CHOOSE FAST PWM .. TOP ICR1
	CLR_BIT(TCCR1A,TCCR1A_WGM10);
	SET_BIT(TCCR1A,TCCR1A_WGM11);
	SET_BIT(TCCR1B,TCCR1B_WGM12);
	SET_BIT(TCCR1B,TCCR1B_WGM13);

	//PRESCALAR /8
	CLR_BIT(TCCR1B,TCCR1B_CS10);
	SET_BIT(TCCR1B,TCCR1B_CS11);
	CLR_BIT(TCCR1B,TCCR1B_CS12);



}

void TIMER1_setcompare_onmatch( u16 copy_OCR1A)
{
	OCR1A_PTR=copy_OCR1A;//750-->0(angle)     2500--->180(angle)
}


void TIMER1_setoverflow_value_A(u16 copy_ICR1)
{
	ICR1_PTR=copy_ICR1;


}


