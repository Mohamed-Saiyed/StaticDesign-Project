/*******************************************************
*    Aother :
*    Date   :	
********************************************************/ 

#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(VAR,BIT)   ((VAR) |=  (1 << (BIT)))
#define SET_PORT(VAR,VAL)  ((VAR) = (VAL))
#define CLR_BIT(VAR,BIT)   ((VAR) &= ~(1 << (BIT)))
#define TOG_BIT(VAR,BIT)   ((VAR) ^=  (1 << (BIT)))
#define GET_BIT(VAR,BIT)   (((VAR) >> BIT) & 1)

#endif /*BIT_MATH_H*/
