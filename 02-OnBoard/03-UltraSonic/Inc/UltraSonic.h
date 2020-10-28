#ifndef ULTRASONIC_INIT_H
#define ULTRASONIC_INIT_H

#define TRIGER_ON		(SET_BIT(ULTRASONIC_PORT , ULTRASONIC_TRIGGER_PIN))
#define TRIGER_OFF		(CLR_BIT(ULTRASONIC_PORT , ULTRASONIC_TRIGGER_PIN))

void UltraSonic_DeInit(void);
void UltraSonic_Init(void);
ErrorStatus UltraSonic_Read(uint8_t *Data);


#endif /*ULTRASONIC_INIT_H*/
