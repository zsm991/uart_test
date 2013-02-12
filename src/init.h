/*
 * init.h
 *
 *  Created on: 08.01.2013
 *      Author: serg
 *
 * This file contains initialization code for STM32VLDISCOVERY board
 */

#ifndef INIT_H_
#define INIT_H_

#include "stm32f10x_conf.h"
#include "system_stm32f10x.h"
#include "vldiscovery.h"



void RCC_init(void);
void GPIO_init(void);

#endif /* INIT_H_ */




