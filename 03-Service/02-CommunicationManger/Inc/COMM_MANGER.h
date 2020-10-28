#ifndef COMM_MANGER_H
#define COMM_MANGER_H

/*Data IDs*/
#define TIMESTAMP_ID	0
#define DIRECTION_ID	1
#define TEMPRATURE_ID   2

/*Bus IDs*/
#define SPI_ID			0
#define UART_ID			1


typedef Bus_ID_t  uint8_t ;
typedef Data_ID_t uint8_t ;

typedef struct
{
	Data_ID_t ID;
	Bus_ID_t Bus_Type;
	uint8_t length;
}Comm_Manger_config;

/*Function prototype*/
ErrorStatus CommManger_Send(Data_ID_t ID , uint8_t *Date);
ErrorStatus CommManger_Receive(Data_ID_t ID , uint8_t *Date);
void CommManger_Init(void);

#endif /*COMM_MANGER_H*/

