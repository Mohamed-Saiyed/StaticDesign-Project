#include "Std_types.h"
#include "BIT_MATH.h"

#include "GPIO.h"
#include "UART.h"

#include "COMM_MANGER.h"

Comm_Manger_config Comm_MangerConf[1]
{
	{TEMPRATURE_ID,UART,1}
};

void CommManger_Init(void)
{
	/*initialize the communication protocols Buses*/
}

ErrorStatus CommManger_Send(Data_ID_t ID , uint8_t *Date)
{
	/*send the following data over the bus chosen by ID*/
}

ErrorStatus CommManger_Receive(Data_ID_t ID , uint8_t *Date)
{
	/*Receive the data over the bus chosen by ID*/
	/*Store the data received into the Data buffer*/
}
