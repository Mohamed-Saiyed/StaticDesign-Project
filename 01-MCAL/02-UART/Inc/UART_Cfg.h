#ifndef UART_CFG_H
#define UART_CFG_H

/* 0 NO_ERROR_DETECTION      
   1 ERROR_DETECTION_ENABLED
   */
#define UART_USE_ERROR_DETECTION   NO_ERROR_DETECTION


/* UART MODES         
	UART_TX			0 
	UART_RX			1 
	UART_TX_RX_MODE 2 
*/ 
#define UART_MODE   UART_TX_RX_MODE

/*
	UART_FRAME_8_BIT	0
	UART_FRAME_9_BIT	1
*/
#define UART_FRAME_WIDTH   UART_FRAME_8_BIT



#endif /*UART_CFG_H*/
