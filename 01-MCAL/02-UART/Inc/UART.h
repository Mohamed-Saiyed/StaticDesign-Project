#ifndef UART_INIT_H
#define UART_INIT_H

void UART_Init(void);
ErrorStatus UART_Transmit(uint8_t *Data);
ErrorStatus UART_Receive(uint8_t *Data_Buffer);
void UART_DeInit(void);

#endif /*UART_INIT_H*/
