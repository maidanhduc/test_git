#include "RCC.h"

void RCC_Enable_PortA(void){
	RCC->APB2ENR.BITS.IOPAEN = 1;
}
void RCC_Enable_PortB(void){
	RCC->APB2ENR.BITS.IOPBEN = 1;
}
void RCC_Enable_PortC(void){
	RCC->APB2ENR.BITS.IOPCEN = 1;
}
void RCC_Enable_Uart1(void){
	RCC->APB2ENR.BITS.USART1EN = 1;
}
void mDelay(uint32_t time){
	while(time > 1){
		time--;
	}
}