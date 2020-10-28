#ifndef UART_LCFG_H
#define UART_LCFG_H

#define UART_PARITY_EVEN	0
#define UART_PARITY_ODD     1

extern BAUD_RATE  UART_Baud_Rate ;
extern STOP_BITS  UART_Stop_Bits ;

#if (UART_USE_ERROR_DETECTION == 1)
	extern uint8_t UART_Parity_Bit;
#endif

typedef enum
{
	UART_BAUD_4800   = 0 , 
	UART_BAUD_9600   = 1 ,
	UART_BAUD_19200  = 2 ,
	UART_BAUD_115200 = 3 
}BAUD_RATE_t;

typedef enum
{
	UART_STOP_BIT_1 = 0 ,
	UART_STOP_BIT_2 = 1
}STOP_BITS_t;





#endif /*UART_LCFG_H*/
