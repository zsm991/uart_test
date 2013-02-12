/*
 * vldiscovery.h
 *
 *  Created on: 08.01.2013
 *      Author: serg
 *
 *  This file contains description of peripheria and defines used with STM32VLDISCOVERY
 *  board
 */

#ifndef VLDISCOVERY_H_
#define VLDISCOVERY_H_

  #define USARTx                   USART1
  #define USARTx_GPIO              GPIOA
  #define USARTx_CLK               RCC_APB2Periph_USART1
  #define USARTx_GPIO_CLK          RCC_APB2Periph_GPIOA
  #define USARTx_RxPin             GPIO_Pin_10
  #define USARTx_TxPin             GPIO_Pin_9
  #define USARTx_IRQn              USART1_IRQn
  #define USARTx_IRQHandler        USART1_IRQHandler


#endif /* VLDISCOVERY_H_ */
