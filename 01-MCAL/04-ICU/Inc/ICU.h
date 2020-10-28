#ifndef ICU_INIT_H
#define ICU_INIT_H

/*Functions prototypes*/
void ICU_Init(void);
ErrorStatus ICU_StartCpture(void);
uint32_t ICU_GetCptureValue(void);
void ICU_StopCpture(void);
void ICU_Deinit(void);


#endif /*ICU_INIT_H*/