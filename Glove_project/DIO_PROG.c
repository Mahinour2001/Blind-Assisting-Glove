/*
 * DIO_PROGG.C
 *
 *  Created on: Aug 24, 2021
 *      Author: mahin
 */

#include "STD_types.h"
#include "MathUtils.h"
#include "DIO_reg.h"
#include "DIO_int.h"

 void DIO_setPinDirection(uint8 pin_no,uint8  port_no,uint8 dir)
{
	if(pin_no<=PIN7)
	{
		if(dir==INPUT_FREE)
		{
			switch(port_no)
			{
			case u8_PORTA:
			{
				CLR_BIT(DDRA,pin_no);
				break;
			}
			case u8_PORTB:
			{
				CLR_BIT(DDRB,pin_no);
				break;
			}
			case u8_PORTC:
			{
				CLR_BIT(DDRC,pin_no);
				break;
			}
			case u8_PORTD:
			{
				CLR_BIT(DDRD,pin_no); break;
			}
			}


		}
		else if (dir==INPUT_PULLUP)
		{
			switch(port_no)
			{
			case u8_PORTA:
			{
				CLR_BIT(DDRA,pin_no);
				SET_BIT(PORTA,pin_no);
				break;
			}
			case u8_PORTB:
			{
				CLR_BIT(DDRB,pin_no);
				SET_BIT(PORTB,pin_no);
				break;
			}
			case u8_PORTC:
			{
				CLR_BIT(DDRC,pin_no);
				SET_BIT(PORTC,pin_no);
				break;
			}
			case u8_PORTD:
			{
				CLR_BIT(DDRD,pin_no);
				SET_BIT(PORTD,pin_no);
				break;
			}

			}
		}
		else if (dir==OUTPUT)
		{
			switch(port_no)
			{
			case u8_PORTA:
			{
				SET_BIT(DDRA,pin_no); break;
			}
			case u8_PORTB:
			{
				SET_BIT(DDRB,pin_no);
				break;}
			case u8_PORTC:
			{
				SET_BIT(DDRC,pin_no); break;
			}
			case u8_PORTD:{
				SET_BIT(DDRD,pin_no);
				break;}
			}

		}


	}
}


 void DIO_SetPortDirection(uint8 port_no, uint8 dir)
{

	switch(port_no)
	{
	case u8_PORTA:
	{
		DDRA = dir;
		break;
	}
	case u8_PORTB:
	{
		DDRB = dir;
		break;
	}
	case u8_PORTC:
	{
		DDRC = dir;
		break;
	}
	case u8_PORTD:
	{
		DDRD = dir;
		break;
	}
	}

}

 void DIO_WriteOnPin(uint8 voltage, uint8 pin_no, uint8 port_no)
{
	if(pin_no<=PIN7)
	{
		if(voltage==LOW)
		{
			switch(port_no)
			{
			case u8_PORTA:
			{
				CLR_BIT(PORTA,pin_no);
				break;
			}
			case u8_PORTB:
			{
				CLR_BIT(PORTB,pin_no);
				break;
			}
			case u8_PORTC:
			{
				CLR_BIT(PORTC,pin_no);
				break;
			}
			case u8_PORTD:
			{
				CLR_BIT(PORTD,pin_no);
				break;
			}

			}


		}

		else if (voltage==HIGH)
		{
			switch(port_no)
			{
			case u8_PORTA:
			{
				SET_BIT(PORTA,pin_no);
				break;
			}
			case u8_PORTB:
			{
				SET_BIT(PORTB,pin_no);
				break;
			}
			case u8_PORTC:
			{
				SET_BIT(PORTC,pin_no);
				break;
			}
			case u8_PORTD:
			{
				SET_BIT(PORTD,pin_no);
				break;
			}

			}

		}


	}
}

void DIO_WriteOnPort(uint8 mask,  uint8 port_no)
{
	switch(port_no)
	{
	case u8_PORTA:
	{
		PORTA = mask;
		break;
	}

	case u8_PORTB:
	{
		PORTB = mask;
		break;
	}
	case u8_PORTC:
	{
		PORTC = mask;
		break;
	}
	case u8_PORTD:
	{
		PORTD = mask;
		break;
	}
	}
}


	 uint8 DIO_ReadFromPin(uint8 pin_no, uint8 port_no)
	{
		uint8 pinnu;
		switch(port_no)
		{
		case u8_PORTA:
		{
			pinnu =GET_BIT(PINA,pin_no);
			break;
		}
		case u8_PORTB:
		{
			pinnu =GET_BIT(PINB,pin_no);
			break;
		}
		case u8_PORTC:
		{
			pinnu =GET_BIT(PINC,pin_no);
			break;
		}
		case u8_PORTD:
		{
			pinnu =GET_BIT(PIND,pin_no);
			break;
		}
		}

		return pinnu;
	}


	uint8 DIO_ReadFromPort(uint8 port_no)
	{
		uint8 pinnu;
		switch(port_no)
		{
		case u8_PORTA:
		{
			pinnu = port_no;
			break;
		}

		case u8_PORTB:
		{
			pinnu = port_no;
			break;
		}
		case u8_PORTC:
		{
			pinnu = port_no;
			break;
		}
		case u8_PORTD:
		{
			pinnu = port_no;
			break;
		}
		}

		return pinnu;
	}


