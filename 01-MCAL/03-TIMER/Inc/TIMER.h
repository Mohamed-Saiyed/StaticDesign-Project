#ifndef TIMER_INIT_H
#define TIMER_INIT_H

typedef TICK uint8_t ;
void TIMER_Init(void);
ErrorStatus TIMER_Start(TICK TimeInSeconds);
void TIMER_Stop(void);
void TIMER_DeInit(void);


#endif /*TIMER_INIT_H*/
