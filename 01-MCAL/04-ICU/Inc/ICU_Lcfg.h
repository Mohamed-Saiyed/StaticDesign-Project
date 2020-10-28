#ifndef ICU_LCFG_H
#define ICU_LCFG_H

extern ICU_Prescaler   Prescaler;
extern ICU_Edge_Type   EdgeType;

typedef enum
{
	ICU_PSC_0       = 0 , 
	ICU_PSC_8	    = 1 ,
	ICU_PSC_32      = 2 ,
	ICU_PSC_64 	    = 3 ,
	ICU_PSC_128	    = 4 ,
	ICU_PSC_256     = 5 
	
}ICU_Prescaler_t;

typedef enum 
{
	FALLING_EDGE   = 0 ,
	RISING_EDGE    = 1
	
}ICU_Edge_Type_t;

#endif /*ICU_LCFG_H*/
