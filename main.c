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
//#include "init.h"
#include "vldiscovery.h"

/**
  * @brief   Main program
  * @param  None
  * @retval None
  */

void GPIO_init(void)
{
GPIO_InitTypeDef GPIO_InitStructure;

GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;

GPIO_Init(GPIOC, &GPIO_InitStructure);
};


void delay (void)
{
	int i, j;

for (i=1; i< 500000; i++)
{
//	for (j=1; j< 10; j++)
//	{
//
//	}
};
}
int main(void)
{
	SystemInit();
//	RCC_init();
	  /* Enable GPIO clock */
	RCC_APB2PeriphClockCmd(USARTx_GPIO_CLK | RCC_APB2Periph_AFIO, ENABLE);

	  /* Enable USARTx Clock */
	RCC_APB2PeriphClockCmd(USARTx_CLK, ENABLE);

	// Enable GPIOC Clock
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOC, ENABLE);

	GPIO_init();
	while(1)

	{
		delay();
		GPIO_SetBits(GPIOC,GPIO_Pin_9);
		delay();
		GPIO_ResetBits(GPIOC,GPIO_Pin_9);

	};

}

