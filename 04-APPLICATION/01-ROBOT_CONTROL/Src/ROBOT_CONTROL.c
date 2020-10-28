#include "Std_types.h"
#include "BIT_MATH.h"

#include "OS.h"

#include "DISPLAY.h"
#include "STEERING.h"
#include "DATA_LOGGER.h"

#include "ROBOT_CONTROL.h"

static void Robot_Stop(void);
static void Robot_Start(void);
static void Robot_init(void);

void main(void)
{
	/*Start os system to schedule Robot main function */
}

ErrorStatus RobotControl_MainFunction(void)
{
	/*this main function is responsible to Update robot movement
	  status*/
}

Robot_Status_e RobotControl_GetDirection(void)
{
	/*return robot status*/
}

uint8_t RobotControl_GetTemprature(void)
{
	/*return robot environment's temprature*/
}

void RobotControl_ChangeStatus(Robot_Status_e Status)
{
	/*Change Robot Status*/
}

static void Robot_init(void)
{
	/*initialize robot motors and status
	  to be ready to move*/
	  
}

static void Robot_Start(void)
{
	/*start robot to move to the selected direction*/
}
static void Robot_Stop(void)
{
	/*stop robot from moving*/
}

