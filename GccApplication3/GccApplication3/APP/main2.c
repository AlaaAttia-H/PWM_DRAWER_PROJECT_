/*
 * CFile1.c
 *
 * Created: 13/9/2022 22:48:34
 *  Author: Alaa Attia
 */ 

#include "ATmega32A_Config.h"
#include "main.h"

#include <util/delay.h>

int main(void)
{
	PWMDrawer_Init();
	PWM_Signal_SetUp Signal_Data = {0, 0, 0, 0, 0};
	float32 Scale_ms = 0.25;
	while(1)   // This is for Testing
	{
		
		PWM_Measure(&Signal_Data);
		Scale_ms=((Signal_Data.PeriodT_ms) / 5);
		PWM_DrawWave(&Signal_Data, Scale_ms);
		_delay_ms(200);
	}
}
