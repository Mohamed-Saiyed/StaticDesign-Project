#include "Std_types.h"
#include "BIT_MATH.h"

#include "ADC.h"
#include "ADC_Private"
#include "ADC_Lcfg.h"
#include "ADC_Cfg.h"


void ADC_Init(ADC_Channel_t ADC_Channel)
{
	/*Initializing ADC channel and apply configretions*/
}

ErrorStatus ADC_StartConversion(void)
{
	/* Triggering the ADC conversion using software
	   and wait until it finishs the conversion */
	/*return error if something went wrong*/
}

ErrorStatus ADC_GetADCRead(ADC_Channel_t ADC_Channel , uint8_t *Data_Buffer)
{
	/*store the ADC_Channel Read into the Data_Buffer*/
	/*return Error if the there is no conversion*/
}

ErrorStatus ADC_StopConversion(ADC_Channel_t ADC_Channel)
{
	/*stop ADC channel just from conversion*/
	/*return error if something went wrong*/
}

void ADC_Deinit(ADC_Channel_t ADC_Channel)
{
	/*Resting all ADC channel rigsters and disable 
	  ADC channel*/
}

