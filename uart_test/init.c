/*
 * init.c
 *
 *  Created on: 08.01.2013
 *      Author: serg
 *
 *
 */

#include "init.h"
#include "vldiscovery.h"

void zinit (void)
{
	/* Замэпить и затактировать его ноги
	GPIO_InitTypeDef  GPIO_InitStructure;
	      //USART_InitTypeDef USART_InitStructure;

	       Enable GPIOA clock
	      RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_USART1, ENABLE);

	       Configure USART1 Rx (PA10) as input floating
	      GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_10;
	      GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	      GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_IN_FLOATING;
	      GPIO_Init(GPIOA, &GPIO_InitStructure);

	       Configure USART1 Tx (PA9) as alternate function push-pull
	      GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_9;
	      GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	      GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_AF_PP;
	      GPIO_Init(GPIOA, &GPIO_InitStructure);
*/
	/*
	Заполнить структуру данных инициализации типа USART_InitTypeDef USART_InitStructure;
	USART_InitStructure.USART_BaudRate            = 9600;
	          USART_InitStructure.USART_WordLength          = USART_WordLength_8b;
	          USART_InitStructure.USART_StopBits            = USART_StopBits_1;
	          USART_InitStructure.USART_Parity              = USART_Parity_No ;
	          USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	          USART_InitStructure.USART_Mode                = USART_Mode_Rx | USART_Mode_Tx;


	 3. Инициализировать усарт
	USART_Init(USART1, &USART_InitStructure);
	          USART_Cmd(USART1, ENABLE);

}

*/}
