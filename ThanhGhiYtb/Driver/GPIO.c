#include "GPIO.h"

void GPIO_Config(volatile GPIO_Typedef *GPIOx, uint16_t pin, uint32_t mode){
	uint32_t position =0;
	uint32_t config =0;
	for (position =0; position < 16; position++){
		if (pin & (1<<position)){
			// clear 4 bit config
			if(position < 8){
				// CRL
				GPIOx->CRL.REG &= ~(uint32_t)(0xF << (position*4));
			}
			else{
				GPIOx->CRH.REG &= ~(uint32_t)(0xF << (position-8)*4);
				// CRH                                                         
			}
			switch (mode){
				case GPIO_MODE_OUTPUT_PP :
					config = (0x03 << 0) | (0x00 << 2);
					break;
				case GPIO_MODE_OUTPUT_OD :
					config = (0x03 << 0) | (0x01 << 2);
					break;
				case GPIO_MODE_INPUT_PU :
					config = (0x00 << 0) | (0x03 << 2);
					break;
				case GPIO_MODE_INPUT_PD :
					config = (0x00 << 0) | (0x03 << 2);
					break;
				case GPIO_MODE_INPUT_FLOATING :
					config = (0x00 << 0) | (0x01 << 2);
					break;
				case GPIO_MODE_INPUT_ANALOG :
					config = (0x00 << 0) | (0x00 << 2);
					break;
				case GPIO_MODE_AF_PP :
					config = (0x03 << 0) | (0x03 << 2);
					break;
				case GPIO_MODE_AF_OD :
					config = (0x03 << 0) | (0x04 << 2);
					break;
			}
			// config
			if(position < 8){
				// CRL
				GPIOx->CRL.REG |= (config << (position*4));
			}
			else{
				// CRH
				GPIOx->CRL.REG |= (config << (position-8)*4);
			}
		}
	}
	// tip : set bit 		reg |= (1 << position)
	//			 clear bit  reg &= ~(1 << position)
}
void GPIO_Write_Pin(volatile GPIO_Typedef *GPIOx, uint16_t pin, uint8_t state){
	if (state == 1){
		GPIOx->BSRR.REG = pin;
	}
	else{
		GPIOx->BRR.REG =pin;
	}
}
uint8_t GPIO_Read_Pin(volatile GPIO_Typedef *GPIOx, uint16_t pin){
	return ((GPIOx->IDR.REG & pin) ? 1 : 0 );
}
