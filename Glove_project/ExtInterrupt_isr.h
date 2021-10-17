/*
 * ExtInterrupt_isr.h
 *
 *  Created on: Sep 1, 2021
 *      Author: mahin
 */

#ifndef EXTINTERRUPT_ISR_H_
#define EXTINTERRUPT_ISR_H_

#include "ExInterrupt_Reg.h"
#define sei() SREG |=1<<7
//INT0
void __vector_11(void) __attribute__ ((signal,used,externally_visible));

#endif /* EXTINTERRUPT_ISR_H_ */
