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

// Define communication UART with 9 bit wordlength
// 1 stop bits,
#define commuart USART1

#define commUSART_WordLength USART_WordLength_9b
USART_StopBits_1
USART_Parity_No

#endif /* VLDISCOVERY_H_ */
