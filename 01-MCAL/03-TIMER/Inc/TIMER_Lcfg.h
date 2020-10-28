#ifndef TIMER_LCFG_H
#define TIMER_LCFG_H

extern Timer_Prescaler   Prescaler;
extern TIMER_CounterMode CounterMode;

typedef enum
{
	TIMER_PSC_0     = 0 , 
	TIMER_PSC_8	    = 1 ,
	TIMER_PSC_16	= 2 ,
	TIMER_PSC_64 	= 3 ,
	TIMER_PSC_128	= 4 ,
	TIMER_PSC_256   = 5 
	
}Timer_Prescaler_t;

typedef enum 
{
	TIMER_UP_COUUNTING   = 0 ,
	TIMER_DOWN_COUNTING  = 1
	
}TIMER_CounterMode_t;

#endif /*TIMER_LCFG_H*/
