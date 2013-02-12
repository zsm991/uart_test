/*
 * zuart.c
 *
 *  Created on: 08.01.2013
 *      Author: serg
 */

#include "stm32f10x.h"

void send_to_uart(uint8_t data)
{

while(!(USART1->SR & USART_SR_TC)); //���� ���� ��� TC � �������� SR ������ 1
{
	USART1->DR=data; //�������� ���� ����� UART
}
}

