#ifndef DIO_INT_H_
#define DIO_INT_H_

#define u8_PORTA  0
#define u8_PORTB  1
#define u8_PORTC  2
#define u8_PORTD  3

#define PIN0   0
#define PIN1   1
#define PIN2   2
#define PIN3   3
#define PIN4   4
#define PIN5   5
#define PIN6   6
#define PIN7   7

#define INPUT_FREE 0
#define INPUT_PULLUP 1
#define OUTPUT 2

#define HIGH 1
#define LOW 0

extern void DIO_setPinDirection (uint8 pin_no,uint8 port_no,uint8 dir);

extern uint8 DIO_ReadFromPin(uint8 pin_no, uint8 port_no);

extern uint8 DIO_ReadFromPort(uint8 port_no);

extern void DIO_WriteOnPin(uint8 voltage, uint8 pin_no, uint8 port_no);

extern void DIO_WriteOnPort(uint8 mask,  uint8 port_no);

extern void DIO_SetPortDirection(uint8 port_no, uint8 dir);


#endif


