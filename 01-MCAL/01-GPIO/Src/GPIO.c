#include "Std_types.h"
#include "BIT_MATH.h"

#include "GPIO.h"
#include "GPIO_Private.h"


ErrorStatus Gpio_initPin(DIO_PIN_t Pin , DIO_DIRECTION_t direction)
{
  /*Acessing mcu rigster level to put the specified pin to the given direction /
  to be input or output */
  
  /*return error if pin is > 31*/
}
ErrorStatus Gpio_ReadPin(DIO_PIN_t Pin , uint8_t *Data)
{
 /*Acessing mcu rigster level to get the pin status as high or low / 
  and put it on the selected buffer*/
  
  /*return an error if (data = NULL) |  (pin is > 31)*/
}
ErrorStatus Gpio_WritePin(DIO_PIN_t Pin , uint8_t Data )
{
 /*Acessing mcu rigster level to make the selected pin as high or low/
  return an error if (pin is > 31)
 */
}
