#include "Std_types.h"
#include "BIT_MATH.h"

#include "GPIO.h"
#include "ICU.h"

#include "UltraSonic.h"
#include "UltraSonic_Private.h"
#include "UltraSonic_Cfg.h"

static uint32_t Measure_Distance(void);

void UltraSonic_Init(void)
{
	/*Initializing UltraSonic Trigger && Echo Pins*/
}

ErrorStatus UltraSonic_Read(uint8_t *Data)
{
	/*Start UltraSonic to work*/
	/*measure distance*/
	/*store the calculated distance in the data buffer*/
}

static uint32_t Measure_Distance(void)
{
	/*a private algorithm to get the distance 
	  measured in CM*/
}

void UltraSonic_DeInit(void)
{
	/*deinit UltraSonic Trigger && Echo Pins*/
}

