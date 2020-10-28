#ifndef PWM_INIT_H
#define PWM_INIT_H

typedef PWM_DutyCycle uint8_t;

/*Functions prototypes*/
void PWM_Init(void);
ErrorStatus PWM_Start(void);
ErrorStatus PWM_ChnageDutyCycle(PWM_DutyCycle Duty_cycle);
void PWM_Stop(void);
void PWM_Deinit(void);


#endif /*PWM_INIT_H*/
