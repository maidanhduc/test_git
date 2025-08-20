#include "EXTI.h"

void EXTI0_Init(void){
	AFIO->EXTICR1.REG &= ~(uint32_t)(0xF << 0);
}
void EXTI0_IRQHandler(void){
		
}

