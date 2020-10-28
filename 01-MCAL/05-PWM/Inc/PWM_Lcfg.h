#ifndef PWM_LCFG_H
#define PWM_LCFG_H

extern PWM_Prescaler   PwmPrescaler;
extern PWM_Polarity    PwmPolarity;

typedef enum
{
	PWM_PSC_0       = 0 , 
	PWM_PSC_8	    = 1 ,
	PWM_PSC_32      = 2 ,
	PWM_PSC_64 		= 3 ,
	PWM_PSC_128	    = 4 ,
	PWM_PSC_256     = 5 
	
}PWM_Prescaler_t;

typedef enum 
{
	PWM_ACTIVE_HIGH		     = 0 ,
	PWM_ACTIVE_LOW           = 1
	
}PWM_Polarity_t;

#endif /*PWM_LCFG_H*/
