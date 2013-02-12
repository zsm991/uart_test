/*
 * main.c
 *
 *  Created on: 08.01.2013
 *      Author: serg
 *
 * This program used for testing Uarts of VLDiscovery board
 */

#include "stm32f10x_conf.h"
#include "system_stm32f10x.h"
#include "vldiscovery.h"
#include "init.h"
#include "stm32f10x_it.h"

volatile uint32_t syscounter;

/**
  * @brief   Main program
  * @param  None
  * @retval None
  */


void TimingDelay_Decrement(void)
{
	  if (syscounter != 0x00)
	  {
	    syscounter--;
	  }
}


void delay (uint32_t TimeToDelay)
{
	  syscounter = TimeToDelay;

	  while(syscounter != 0);

}

int main(void)
{
	SystemInit();
	RCC_init();
	GPIO_init();
	SysTick_Config(SystemCoreClock / 1000);
	syscounter=0;

	while(1)

	{
		delay(500);
		GPIO_SetBits(GPIOC,GPIO_Pin_9);
		delay(500);
		GPIO_ResetBits(GPIOC,GPIO_Pin_9);

	};

}

