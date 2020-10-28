#include "Std_types.h"
#include "BIT_MATH.h"

#include "GPIO.h"
#include "PWM.h"

#include "DC_MOTOR.h"
#include "DC_MOTOR_Lcfg.h"

void DcMotor_Init(MOTOR_ID_t MotorID)
{
	/*Initialize the specified Motor Pins to be ready to start moving*/
}

void DcMotor_Start(MOTOR_ID_t MotorID)
{
	/*Start specified Dc Motor to move*/
}

void DcMotor_Stop(MOTOR_ID_t MotorID)
{
	/*Stop the specified Dc Motor*/
}

ErrorStatus DcMotor_ChangeSpeed(MOTOR_ID_t MotorID , PWM_DutyCycle Duty_cycle)
{
	/*change the motor speed using pwm by changing its
		duty cycle*/
}
