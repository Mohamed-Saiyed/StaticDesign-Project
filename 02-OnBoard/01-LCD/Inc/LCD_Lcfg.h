#ifndef LCD_LCFG_H
#define LCD_LCFG_H


typedef struct 
{
	DIO_PIN_t LCD_Enable_Pin 	;	
	
	DIO_PIN_t LCD_ReadWrite_Pin ;
	
	DIO_PIN_t LCD_RS_Pin        ;
	
}LCD_Ctrl_Cfg_s;

extern LCD_Ctrl_Cfg_s LCD_Ctrl_Pins;



#endif /*LCD_LCFG_H*/
