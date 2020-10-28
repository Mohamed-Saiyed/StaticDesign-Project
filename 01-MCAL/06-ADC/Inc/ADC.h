#ifndef ADC_INIT_H
#define ADC_INIT_H

/*ADC Channles*/
#define ADC_CHANNEL_1	0	
#define ADC_CHANNEL_2	1	
#define ADC_CHANNEL_3	2	
#define ADC_CHANNEL_4	3	
#define ADC_CHANNEL_5	4	
#define ADC_CHANNEL_6	5	
#define ADC_CHANNEL_7	6	
#define ADC_CHANNEL_8	7	

typedef ADC_Channel_t uint8_t ;

/*Functions prototypes*/
void ADC_Init(ADC_Channel_t ADC_Channel);
ErrorStatus ADC_StartConversion(void);
ErrorStatus ADC_GetADCRead(ADC_Channel_t ADC_Channel , uint8_t *Data_Buffer);
ErrorStatus ADC_StopConversion(ADC_Channel_t ADC_Channel);
void ADC_Deinit(ADC_Channel_t ADC_Channel);



#endif /*ADC_INIT_H*/
