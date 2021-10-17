
#ifndef EXINTERRUPT_REG_H_
#define EXINTERRUPT_REG_H_

#define GICR (*(volatile uint8_t *)((0x3B) + 0x20))
#define MCUCR (*(volatile uint8_t *)((0x35) + 0x20))
#define SREG (*(volatile uint8_t *)((0x3F) + 0x20))
#define GIFR (*(volatile uint8_t *)((0x3A) + 0x20))
#define MCUCSR (*(volatile uint8_t *)((0x34) + 0x20))


#define SREG_I  7
#define INT2    5
#define INT0    6
#define INT1    7

#define ISC00   0
#define ISC01   1
#define ISC10   2
#define ISC11   3

#endif /* EXINTERRUPT_REG_H_ */
