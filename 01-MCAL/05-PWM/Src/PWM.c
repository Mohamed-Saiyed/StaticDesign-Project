#include "Std_types.h"
#include "BIT_MATH.h"

#include "GPIO.h"

#include "PMW.h"
#include "PWM_Private"
#include "PWM_Lcfg.h"
#include "PWM_Cfg.h"

void PWM_Init(void)
{
	/*Initializing PWM channel and apply configretion*/
}

ErrorStatus PWM_Start(void)
{
	/*enable PWM start Generating wave and return 
	  ok if the module is intialized well ||
	  if the channel is not used
	  */
	/*return error if something went wrong*/
}

ErrorStatus PWM_ChnageDutyCycle(PWM_DutyCycle Duty_cycle)
{
	/*change pwm duty cycle*/
}

void PWM_Stop(void)
{
	/*STOP PWM*/
	/*return error if something went wrong*/
}

void PWM_Deinit(void)
{
	/*Resting all PWM channel rigsters and disable 
	  PWM channel*/
}

