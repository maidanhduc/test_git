#include <stdio.h>
#include <stdint.h>
#include "RCC.h"
#include "GPIO.h"

#define GPIOA_ADD_Base 				0x40010800UL
#define GPIOA_ADD_CRL 				(GPIOA_ADD_Base + 0x00)
#define GPIOA_ADD_ODR 				(GPIOA_ADD_Base + 0x0C)
#define GPIOA_CRL 						(*(volatile uint32_t*)GPIOA_ADD_CRL)
#define GPIOA_ODR 						(*(volatile uint32_t*)GPIOA_ADD_ODR)	

int main(){
	RCC_Enable_PortB();
	GPIO_Config(GPIOB, GPIO_PIN_2, GPIO_MODE_OUTPUT_PP);
	while(1){
		GPIO_Write_Pin(GPIOB, GPIO_PIN_2, 1);
		mDelay(10000000);
		GPIO_Write_Pin(GPIOB, GPIO_PIN_2, 0);
		mDelay(10000000);
	}
}
