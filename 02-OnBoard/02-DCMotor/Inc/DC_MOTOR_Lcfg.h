#ifndef DC_MOTOR_LCFG_H
#define DC_MOTOR_LCFG_H

typedef struct 
{
	DIO_PIN_t DC_MOTOR1_PIN	;
	
	DIO_PIN_t DC_MOTOR2_PIN	;
		
	DIO_PIN_t DC_MOTOR3_PIN	;
	
	DIO_PIN_t DC_MOTOR4_PIN	;
	
}DC_MotorsPinCfg_s;

extern DC_MotorsPinCfg_s Dc_MotorsPins;
 
 
#endif /*DC_MOTOR_LCFG_H*/
