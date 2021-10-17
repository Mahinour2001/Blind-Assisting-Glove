#ifndef TIMER0_REG_H_
#define TIMER0_REG_H_

#define TTCR0           (*((volatile uint8 *)0x53))
#define TIMER0_OCR0       (*((volatile uint8 *)0x5C))
#define TIMSK              (*((volatile uint8 *)0x59))
#define TCNT0           (*((volatile uint8 *)0x52))


#endif
