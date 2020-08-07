/*
 * DIO_First.c
 *
 * Created: 25/07/2020 06:15:26 م
 * Author : Ali
 */ 


#include "LED.h"
#include "Button.h"
#define F_CPU  16000000
#include <util/delay.h>




int main(void)
{
  
  uint8 Button_Value = 0;
  
  LED0_Init();
  Button0_Init();
  
  LED0_ON();
  
  
  
    while (1) 
    {
		
		Button_Value = Button0_GetValue();
		
		if(Button_Value == 1)
		{
			LED0_Toggle();
		}
		
		
		
    }
	
}

