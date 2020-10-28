#include "Std_types.h"
#include "BIT_MATH.h"

#include "GPIO.h"

#include "ICU.h"
#include "ICU_Private"
#include "ICU_Lcfg.h"
#include "ICU_Cfg.h"

void ICU_Init(void)
{
	/*Initializing ICU channel and apply configuration
	*/
}

ErrorStatus ICU_StartCpture(void)
{
	/*enable icu start capturing and return 
	  ok if the module is intialized well*/
	/*return error if something went wrong*/
}

uint32_t ICU_GetCptureValue(void)
{
	/*return Input capture timing value*/
}

void ICU_StopCpture(void)
{
	/*Disable icu start capturing*/
}

void ICU_Deinit(void)
{
	/*Resting all ICU channel rigsters and disable 
	  ICU channel*/
}

