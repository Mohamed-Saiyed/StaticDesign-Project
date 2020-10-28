#ifndef WIFI_LCFG_H
#define WIFI_LCFG_H

typedef struct
{
	char* WIFI_SSID 	   ;
	
	char* WIFI_PASSWORD	   ;
	
	char  WIFI_PORT        ;
	
}Esp_NetworkCfg_s;

extern Esp_NetworkCfg_s NetworkCfg;
   

#endif /*WIFI_LCFG_H*/
