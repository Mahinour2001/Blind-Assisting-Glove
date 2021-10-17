#ifndef MATH_UTILS_H_
#define MATH_UTILS_H_

#define SET_BIT(VAR,BITNO) (VAR |=  (1 << BITNO))
#define CLR_BIT(VAR,BITNO) (VAR &= ~(1 << BITNO))
#define TOG_BIT(VAR,BITNO) (VAR ^=  (1 << BITNO))
#define GET_BIT(VAR,BITNO) ((VAR >> (BITNO)) & 0x01)

#endif
