#ifndef DC_MOTOR_INIT_H
#define DC_MOTOR_INIT_H

#define MOTOR_ID_1	 0
#define MOTOR_ID_2	 1
#define MOTOR_ID_3	 2
#define MOTOR_ID_4 	 3 

typedef MOTOR_ID_t uint8_t ;

void DcMotor_Init(MOTOR_ID_t MotorID);
void DcMotor_Start(MOTOR_ID_t MotorID);
void DcMotor_Stop(MOTOR_ID_t MotorID);
ErrorStatus DcMotor_ChangeSpeed(MOTOR_ID_t MotorID , PWM_DutyCycle Duty_cycle);

#endif /*DC_MOTOR_INIT_H*/
