#include "STD_TYPES.h"

#include "UART_Lcfg.h"


BAUD_RATE  UART_Baud_Rate  =  UART_BAUD_9600;

STOP_BITS  UART_Stop_Bits  =  UART_STOP_BIT_1;

#if (UART_USE_ERROR_DETECTION == 1)
	uint8_t UART_Parity_Bit = UART_PARITY_EVEN;
#endif
