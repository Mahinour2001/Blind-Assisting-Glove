/*
 * GIE_prog.c
 *
 *  Created on: Aug 26, 2021
 *      Author: HP
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GIE_interface.h"
#include "GIE_reg.h"
#


void GIE_enable(void)
{
	SET_BIT(SREG,SREG_I);
}

void GIE_disable(void)
{
	CLR_BIT(SREG,SREG_I);
}
