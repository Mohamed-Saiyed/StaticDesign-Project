#ifndef LCD_PRIVATE_H
#deifne LCD_PRIVATE_H


/* LCD DATA BITS MODE */
#define LCD_DATA_BITS_MODE_4	0
#define LCD_DATA_BITS_MODE_8	1

/*LCD Data port options*/
/*(GPIOA GPIOB GPIOC GPIOD) are defined in GPIO_PRIVATE */
#define LCD_DATA_PORTA	     GPIOA 
#define LCD_DATA_PORTB 	     GPIOB 
#define LCD_DATA_PORTC 	     GPIOC
#define LCD_DATA_PORTD       GPIOD
							 
/*LCD Data control options*/ 
#define LCD_CONTROL_PORTA	 GPIOA 
#define LCD_CONTROL_PORTB 	 GPIOB 
#define LCD_CONTROL_PORTC 	 GPIOC
#define LCD_CONTROL_PORTD    GPIOD


/**/
#define UPPER_PORT_PINS		 0
#define LOWER_PORT_PINS      1

#endif /*LCD_PRIVATE_H*/
 