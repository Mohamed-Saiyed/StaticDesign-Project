#include "Std_types.h"
#include "BIT_MATH.h"

#include "GPIO.h"
#include "ADC.h"

#include "TmepSensor.h"
#include "TEMPRATURE_Lcfg.h"

static void Calculate_tmep(uint32_t ADC_Read);

void TmepSensor_Init(void)
{
	/*Initializing temprature sesnsor ADC Channel*/
}

ErrorStatus TmepSensor_Read(uint8_t *Data)
{
	/*Start TmepSensor to work*/
	/*measure Temprature*/
	/*store the calculated Temprature in the data buffer*/
}

static void Calculate_tmep(uint32_t ADC_Read)
{
	/*a private algorithm to get the Temprature
	  from ADC Read*/
}

void TmepSensor_DeInit(void)
{
	/*Disable temp sensor ADC Channel*/ 
}
