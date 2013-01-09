/*
 * zuart.c
 *
 *  Created on: 08.01.2013
 *      Author: serg
 */


void send_to_uart(uint8_t data)
{

while(!(USART1->SR & USART_SR_TC)); //∆дем пока бит TC в регистре SR станет 1
{
	USART1->DR=data; //ќтсылаем байт через UART
}
}
