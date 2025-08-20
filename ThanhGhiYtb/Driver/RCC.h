#ifndef __RCC_H
#define __RCC_H
#include <stdint.h>

typedef struct {
	// RCC_CR
	union{
		uint32_t REG;
		struct {
			uint32_t HSION 			:1;
			uint32_t HSIRDY			:1;
			uint32_t RES1  			:1;
			uint32_t HSITRIM		:5;
			uint32_t HSICAL			:8;
			uint32_t HSEON			:1;
			uint32_t HSERDY			:1;
			uint32_t HSEBYB			:1;
			uint32_t CSSON			:1;
			uint32_t RES2			  :4;
			uint32_t PLLON			:1;
			uint32_t PLLRDY			:1;
			uint32_t RES3			  :6;
		}BITS;
	}CR;
	// RCC_CFGR
	union{
		uint32_t REG;
		struct{
			uint32_t SW   			:2;
			uint32_t SWS			  :2;
			uint32_t HPRE  			:4;
			uint32_t PPRE1   		:3;
			uint32_t PPRE2			:3;
			uint32_t ADCPRE			:2;
			uint32_t PLLSRC			:1;
			uint32_t PLLXTPRE		:1;
			uint32_t PLLMUL			:4;
			uint32_t USBPRE			:1;
			uint32_t RES1		  	:1;
			uint32_t MCO  			:3;
			uint32_t RES2			  :5;			
		}BITS;
	}CFGR;
	// RCC_CIR
	union{
		uint32_t REG;
		struct{
			uint32_t R1   			:1;
			uint32_t R2				  :1;
			uint32_t R3  				:1;
			uint32_t R4		   		:1;
			uint32_t R5					:1;
			uint32_t RES1				:2;
			uint32_t R6					:1;
			uint32_t LSIRDYIE		:1;
			uint32_t LSERDYIE		:1;
			uint32_t HSIRDYIE		:1;
			uint32_t HSERDYIE		:1;
			uint32_t PLLRDYIE  	:1;
			uint32_t RES2			  :3;
			uint32_t LSIRDYC		:1;
			uint32_t LSERDYC		:1;
			uint32_t HSIRDYC		:1;
			uint32_t HSERDYC		:1;
			uint32_t PLLRDYC		:1;
			uint32_t RES3				:2;
			uint32_t CSSC				:1;
			uint32_t RES4				:8;
		}BITS;
	}CIR;
	// RCC_APB2RSTR
	union{
		uint32_t REG;
		struct{
			uint32_t AFIORST   	:1;
			uint32_t RES1			  :1;
			uint32_t IOPARST  	:1;
			uint32_t IOPBRST   	:1;
			uint32_t IOPCRST		:1;
			uint32_t IOPDRST		:1;
			uint32_t IOPERST		:1;
			uint32_t IOPFRST		:1;
			uint32_t IOPGRST		:1;
			uint32_t ADC1RST		:1;
			uint32_t ADC2RST		:1;
			uint32_t TIM1RST  	:1;
			uint32_t SPI2RST		:1;
			uint32_t TIM8RST		:1;	
			uint32_t USART1RST	:1;	
			uint32_t ADC3RST		:1;	
			uint32_t RES2			  :3;	
			uint32_t TIM9RST		:1;	
			uint32_t TIM10RST		:1;	
			uint32_t TIM11RST		:1;	
			uint32_t RES3			  :10;	
		}BITS;
	}APB2RSTR;
	// RCC_APB1RSTR
	union{
		uint32_t REG;
		struct{
			uint32_t TIM2RST   	:1;
			uint32_t TIM3RST		:1;
			uint32_t TIM4RST  	:1;
			uint32_t TIM5RST   	:1;
			uint32_t TIM6RST		:1;
			uint32_t TIM7RST		:1;
			uint32_t TIM12RST		:1;
			uint32_t TIM13RST		:1;
			uint32_t RES1				:2;
			uint32_t WWDGRST		:1;
			uint32_t RES2		  	:2;
			uint32_t SPI2RST  	:1;
			uint32_t SPI3RST		:1;
			uint32_t RES3				:1;
			uint32_t USART2RST	:1;
			uint32_t USART3RST	:1;
			uint32_t USART4RST	:1;
			uint32_t USART5RST	:1;
			uint32_t I2C1RST		:1;
			uint32_t I2C2RST		:1;
			uint32_t USBRST			:1;
			uint32_t RES4				:1;
			uint32_t CANRST			:1;
			uint32_t RES5				:1;
			uint32_t BKPRST			:1;
			uint32_t PWRRST			:1;
			uint32_t DACRST			:1;
			uint32_t RES6				:2;
			
		}BITS;
	}APB1RSTR;
	// RCC_AHBENR
	union{
		uint32_t REG;
		struct{
			uint32_t DMA1EN   	:1;
			uint32_t DMA2EN			:1;
			uint32_t SRAMEN  		:1;
			uint32_t RES1   		:1;
			uint32_t FLITFEN		:1;
			uint32_t RES2				:1;
			uint32_t CRCEN			:1;
			uint32_t RES3				:1;
			uint32_t FSMCEN			:1;
			uint32_t RES4				:1;
			uint32_t SDIOEN		  :1;
			uint32_t RES5  			:5;
			uint32_t RES6			  :16;			
		}BITS;
	}AHBENR;
	// RCC_APB2ENR
	union{
		uint32_t REG;
		struct{
			uint32_t AFIOEN   	:1;
			uint32_t RES1			  :1;
			uint32_t IOPAEN  		:1;
			uint32_t IOPBEN			:1;
			uint32_t IOPCEN			:1;
			uint32_t IOPDEN			:1;
			uint32_t IOPEEN			:1;
			uint32_t IOPFEN			:1;
			uint32_t IOPGEN			:1;
			uint32_t ADC1EN		  :1;
			uint32_t ADC2EN  		:1;
			uint32_t TIM1EN			:1;		
			uint32_t SPI1EN			:1;
			uint32_t TIM8EN			:1;
			uint32_t USART1EN		:1;
			uint32_t ADC3EN			:1;
			uint32_t RES2			  :1;
			uint32_t TIM9EN			:1;
			uint32_t TIM10EN		:1;
			uint32_t TIM11EN		:1;
			uint32_t RES3			  :10;
		}BITS;
	}APB2ENR;
	// RCC_APB1ENR
	union{
		uint32_t REG;
		struct{
			uint32_t TIM2EN   	:1;
			uint32_t TIM3EN			:1;
			uint32_t TIM4EN  		:1;
			uint32_t TIM5EN   	:1;
			uint32_t TIM6EN			:1;
			uint32_t TIM7EN			:1;
			uint32_t TIM12EN		:1;
			uint32_t TIM13EN		:1;
			uint32_t TIM14EN		:1;
			uint32_t RES1			  :2;
			uint32_t WWDGEN		  :1;
			uint32_t RES2  			:2;
			uint32_t SPI2EN			:1;
			uint32_t SPI3EN			:1;
			uint32_t RES3			  :1;
			uint32_t USART2EN		:1;
			uint32_t USART3EN		:1;
			uint32_t UART4EN		:1;
			uint32_t UART5EN		:1;
			uint32_t I2C1EN			:1;
			uint32_t I2C2EN			:1;
			uint32_t USBEN			:1;
			uint32_t RES4			  :1;
			uint32_t CANEN			:1;
			uint32_t RES5				:1;
			uint32_t BKPEN			:1;
			uint32_t PWREN			:1;
			uint32_t DACEN			:1;
			uint32_t RES6				:2;
		}BITS;
	}APB1ENR;
	// RCC_BDCR
	union{
		uint32_t REG;
		struct{
			uint32_t LSEON   		:1;
			uint32_t LSERDY			:1;
			uint32_t LSEBYP  		:1;
			uint32_t RES1   		:5;
			uint32_t RTCSEL			:2;
			uint32_t RES2				:5;
			uint32_t RTCEN			:1;
			uint32_t BDRST			:1;
			uint32_t RES3				:15;		
		}BITS;
	}BDCR;
	// RCC_CSR
	union{
		uint32_t REG;
		struct{
			uint32_t LSION   		:1;
			uint32_t LSIRDY			:1;
			uint32_t RES1  			:14;
			uint32_t RES2   		:8;
			uint32_t RMVF				:1;
			uint32_t RES3				:1;
			uint32_t PINRSTF		:1;
			uint32_t PORRSTF		:1;
			uint32_t SFTRSTF		:1;
			uint32_t IWDGRSTF		:1;
			uint32_t WWDGRSTF		:1;
			uint32_t LPWRRSTF  	:1;
		}BITS;
	}CSR;
}RCC_Typedef;

#define RCC_ADDRESS 		0x40021000UL
#define RCC					((volatile RCC_Typedef*)RCC_ADDRESS)

void RCC_Enable_PortA(void);
void RCC_Enable_PortB(void);
void RCC_Enable_PortC(void);
void RCC_Enable_Uart1(void);

void mDelay(uint32_t time);
#endif
