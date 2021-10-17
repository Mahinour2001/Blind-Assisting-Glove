#include "MathUtils.h"
#include "STD_types.h"
#include "DIO_reg.h"
#include "DIO_int.h"
#include "ExInterrupt_Reg.h"
#include "ExtInterrupt_isr.h"
#include "TIME0_Reg.h"
#include "TIME0_int.h"

void TIME0_InitReg(void)
{
	SET_BIT(TTCR0,TTCR0_FOC0);
	CLR_BIT(TTCR0,TTCR0_WGM00);
	CLR_BIT(TTCR0,TTCR0_COM01);
	CLR_BIT(TTCR0,TTCR0_COM00);
	CLR_BIT(TTCR0,TTCR0_WGM01);
	SET_BIT(TTCR0,TTCR0_CS02);
	CLR_BIT(TTCR0,TTCR0_CS01);
	CLR_BIT(TTCR0,TTCR0_CS00);
	CLR_BIT(TIMSK,TIMSK_OCIE0);
	SET_BIT(TIMSK,TIMSK_TOIE0);
	SET_BIT(SREG,SREG_I);

}
