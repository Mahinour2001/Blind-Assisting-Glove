/*
 * TIMER1_reg.h
 *
 *  Created on: Sep 16, 2021
 *      Author: HP
 */

#ifndef TIMER1_REG_H_
#define TIMER1_REG_H_

#define TCCR1A         *((volatile uint8*)0x4f)
#define TCCR1A_COM1B1   5
#define TCCR1A_COM1B0   4
#define TCCR1A_COM1A1   7
#define TCCR1A_COM1A0   6
#define TCCR1A_FOC1A    3
#define TCCR1A_FOC1B    2
#define TCCR1A_WGM11    1
#define TCCR1A_WGM10    0


#define TCCR1B         *((volatile uint8*)0x4e)
#define TCCR1B_WGM12    3
#define TCCR1B_WGM13    4
#define TCCR1B_CS12        2
#define TCCR1B_CS11        1
#define TCCR1B_CS10        0

#define OCR1A_PTR       *((volatile uint16*)0x4A)
#define OCR1AH        *((volatile uint8*)0x4B)
#define OCR1AL        *((volatile uint8*)0x4A)

#define ICR1_PTR       *((volatile uint16*)0x46)
#define ICR1L        *((volatile uint8*)0x46)
#define ICR1H        *((volatile uint8*)0x47)



#endif /* TIMER1_REG_H_ */
