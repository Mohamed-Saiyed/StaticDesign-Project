#ifndef ROBOT_CONTROL_H
#define ROBOT_CONTROL_H

typedef enum
{
	ROBOT_INIT	= 0 ,	
	ROBOT_FORW  = 1 ,
	ROBOT_BACKW = 2 ,
	ROBOT_RIGHT = 3 ,
	ROBOT_LEFT  = 4

}Robot_Status_e;


ErrorStatus RobotControl_MainFunction(void);
uint8_t RobotControl_GetDirection(void);
uint8_t RobotControl_GetTimestamp(void);
uint8_t RobotControl_GetTemprature(void);

#endif /*ROBOT_CONTROL_H*/
