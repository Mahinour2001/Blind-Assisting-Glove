#ifndef TIME0_INT_H_
#define TIME0_INT_H_

#define TTCR0_FOC0          7
#define TTCR0_WGM00         6
#define TTCR0_WGM01         3
#define TTCR0_CS00          0
#define TTCR0_CS01          1
#define TTCR0_CS02          2

#define TTCR0_COM00          4
#define TTCR0_COM01          5
#define TTCR0_FOC0           7

#define TIMSK_TOIE0        0
#define TIMSK_OCIE0        1

extern void TIME0_InitReg(void);

#endif
