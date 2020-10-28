#ifndef WIFI_INIT_H
#define WIFI_INIT_H

void WiFI_Init(void);
#if (WIFI_MODE == WIFI_CLIENT_MODE)
	ErrorStatus WiFi_Transmit(uint8_t *Data);
#elif (WIFI_MODE == WIFI_SERVER_MODE)
	ErrorStatus WiFi_Receive(uint8_t *Data);
#else
	#error "Please choose WiFI Mode in config file"
#endif

void WiFi_DeInit(void);

#endif /*WIFI_INIT_H*/
