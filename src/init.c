/*
 * init.c
 *
 *  Created on: 08.01.2013
 *      Author: serg
 *
 *
 */


#include "init.h"

void RCC_init(void)
{
	  /* Enable GPIO clock */
	RCC_APB2PeriphClockCmd(USARTx_GPIO_CLK | RCC_APB2Periph_AFIO, ENABLE);

	  /* Enable USARTx Clock */
	RCC_APB2PeriphClockCmd(USARTx_CLK, ENABLE);

	// Enable GPIOC Clock
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOC, ENABLE);




};


void GPIO_init(void)
{
GPIO_InitTypeDef GPIO_InitStructure;

GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;

GPIO_Init(GPIOC, &GPIO_InitStructure);
};


