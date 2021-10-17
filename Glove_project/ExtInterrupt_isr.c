#include "ExInterrupt_Reg.h"
#include "ExtInterrupt_isr.h"
#include "DIO_reg.h"
#include "DIO_int.h"
#include "TIME0_Reg.h"
#include "TIME0_int.h"
#include "avr/delay.h"

static uint8 Overflows_Count=0;
void __vector_11(void)
{
	Overflows_Count++;
	if (Overflows_Count==122)
	{
		PORTC=~PORTC;
		Overflows_Count=0;
		TCNT0=0XEE;
	}

}


