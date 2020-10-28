#include "Std_types.h"
#include "BIT_MATH.h"

#include "GPIO.h"

#include "UART.h"
#include "UART_Private.h"
#include "UART_Cfg.h"
#include "UART_Lcfg.h"

void UART_Init(void)
{
	/*Initializing Uart baud rate and frame width of the data*/
}

ErrorStatus UART_Transmit(uint8_t *Data)
{
	/*Transmiting the following data buffer over uart*/
	/*return error if Data = NULL*/
	/*return Ok if Date is sent correctly*/
}

ErrorStatus UART_Receive(uint8_t *Data_Buffer)
{
	/*Receive data over Uart and store in Data_Buffer*/
	/*return error if Data = NULL*/
	/*return Ok if Date is Recived correctly*/
}

void UART_DeInit(void)
{
	/*Resting all Uart ringsters and disable 
	  uart peripheral*/
}
