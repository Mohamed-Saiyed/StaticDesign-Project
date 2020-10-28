#ifndef LCD_INIT_H
#define LCD_INIT_H
 
#define TWO_LINE_LCD_Eight_BIT_MODE    0x38
#define TWO_LINE_LCD_Four_BIT_MODE     0x28
#define CURSOR_OFF                     0x0C
#define CLEAR_SCREEN                   0x01
#define CURSOR_ON                      0x0E
#define SET_CURSOR_LOCATION            0x80
#define FOUR_BITS_DATA_MODE            0x02

void LCD_Init(void);
ErrorStatus LCD_Display(uint8_t *Data);

#endif /*LCD_INIT_H*/
