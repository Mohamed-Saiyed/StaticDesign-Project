#ifndef ADC_LCFG_H
#define ADC_LCFG_H

extern ADC_Prescaler     ADCPrescaler;
extern ADC_Resolution    ADCResolution;

typedef enum
{
	ADC_PSC_2       = 0 , 
	ADC_PSC_4	    = 1 ,
	ADC_PSC_6	    = 2 ,
	ADC_PSC_8       = 3 	
	
}ADC_Prescaler_t;

typedef enum 
{
	ADC_12_BIT_RESOLUTION		     = 0 ,
	ADC_10_BIT_RESOLUTION            = 1 ,
	ADC_8_BIT_RESOLUTION             = 2 ,
	ADC_6_BIT_RESOLUTION             = 3 
	
}ADC_Resolution_t;

#endif /*ADC_LCFG_H*/
