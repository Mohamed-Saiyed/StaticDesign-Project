#include "Std_types.h"
#include "BIT_MATH.h"

#include "GPIO.h"
#include "UART.h"

#include "WIFI.h"
#include "WIFI_Private.h"
#include "WIFI_Cfg.h"
#include "WIFI_Lcfg.h"

static ErrorStatus WiFi_Reset(void);
static ErrorStatus WiFi_ConnectToNetwork(void);
static ErrorStatus WiFi_Disconnect(void);

void WiFI_Init(void)
{
	/*Initialize WIFI By configure UART baud rate and date frame*/
}

#if (WIFI_MODE == WIFI_CLIENT_MODE)
	ErrorStatus WiFi_Transmit(uint8_t *Data)
	{
		/*Transmitting the following data buffer over Wifi*/
		/*return error if Data = NULL*/
		/*return Ok if Date is sent correctly*/
	}
#elif (WIFI_MODE == WIFI_SERVER_MODE)
	ErrorStatus WiFi_Receive(uint8_t *Data)
	{
		/*Receive data over Uart wirelessy over WIFI and store in Data_Buffer*/
		/*return error if Data = NULL*/
		/*return Ok if Date is Recived correctly*/
	}
#else
	#error "Please choose WiFI Mode in config file"
#endif

void WiFi_DeInit(void)
{
	/*Resting all Uart rigsters and disable 
	  uart peripheral for WIFI*/
}

static ErrorStatus WiFi_Reset(void)
{
	/*Reset wifi configrations*/
}
static ErrorStatus WiFi_ConnectToNetwork(void)
{
	/*Connect wifi to the specified network
	 usig SSID && Password*/
}
static ErrorStatus WiFi_Disconnect(void)
{
	/*Disconnect wifi to the specified network*/
}
