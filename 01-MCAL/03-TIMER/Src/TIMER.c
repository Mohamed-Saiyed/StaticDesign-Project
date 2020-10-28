#include "Std_types.h"
#include "BIT_MATH.h"

#include "GPIO.h"

#include "TIMER.h"
#include "TIMER_Private"
#include "TIMER_Lcfg.h"
#include "TIMER_Cfg.h"

static void ConvertTicksToSecond(uint32_t Ticks);

void TIMER_Init(void)
{
	/*Initialize the specified timer channel and apply configurations*/
}

ErrorStatus TIMER_Start(TICK TimeInSeconds)
{
	/*Start timer tick count*/
}

void TIMER_Stop(void)
{
	/*Stop timer tick counting*/
}

void TIMER_DeInit(void)
{
	/*Resting all Timer channel rigsters and disable 
	  Timer channel*/
}

static void ConvertTicksToSecond(uint32_t Ticks)
{
	/*Algrothim to calclate the time to seconds*/
}
