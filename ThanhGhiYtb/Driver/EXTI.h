#ifndef __EXTI_H
#define __EXTI_H

#include "TYPE.h"
#include "AFIO.h"

typedef struct{
	__32BIT IMR;
	__32BIT EMR;
	__32BIT RTSR;
	__32BIT FTSR;
	__32BIT SWIER;
	__32BIT PR;
	
}EXTI_TypeDef;

#define EXTI ((volatile EXTI_TypeDef*)  0x4001 0400UL)

void EXTI0_Init(void);
void EXTI0_IRQHandler(void);
#endif
