#include<stdint.h>

#define __IO volatile
	
typedef struct{
    __IO uint32_t   MODER;  // mode register
    __IO uint16_t   OTYPER; // output type register
    uint16_t        rev0;   // padding two bytes
    __IO uint32_t   OSPEEDR;// output speed register
    __IO uint32_t   PUPDR;  // pull up pull down register
    __IO uint16_t   IDR;    // input data register
    uint16_t        rev1;   // padding two bytes
    __IO uint16_t   ODR;    // output data register
    uint16_t        rev2;   // padding two bytes
    __IO uint16_t   BSSRL;  // bit set/reset register low
    __IO uint16_t   BDDRH;  // bit set/reset register high
    __IO uint32_t   LCKR;   // configuration lock register
    __IO uint32_t   AFR[2]; // alternate function register
    __IO uint32_t   BRR;    // bit reset register
    __IO uint32_t   ASCR;   // analog switch control register
} GPIO_Typedef;
typedef struct {
	//__IO uint(bits) name comment
	__IO uint32_t CR[3];//control registers
	__IO uint32_t BRR;  // bit reset register
	__IO uint32_t GTPR; //guard time and prescalar register
	__IO uint32_t RTOR; // reciever timeout register
	__IO uint32_t RQR;  //request register
	__IO uint32_t ISR;  //interrupt and status register
	__IO uint32_t ICR ; //interrupt flag clear register
	__IO uint32_t RDR;  //recieve data register
	__IO uint32_t TDR;  //transmit data register
} USART_Typedef;
typedef struct {
	__IO uint32_t ISR; //interrupt and status register
	__IO uint32_t IER; // interrupt enable register
	__IO uint32_t CR; //control register
	__IO uint32_t CFGR[2]; //configuration register
	__IO uint32_t SMPR[2]; //sample time registers
	__IO uint32_t TR[3]; // watchdog threshold registers
	__IO uint32_t SQR[4]; //regular sequence registers
	__IO uint32_t DR; //regular data register
	__IO uint32_t JSQR; //injected sequence register
	__IO uint32_t OFRy; //offset y register
	__IO uint32_t JDRy; // injected channel y data register
	__IO uint32_t AWD2CR; // analog watchdog 2 configuration register
	__IO uint32_t AWD3CR; // analog watchdog 3 configuration register
	__IO uint32_t DIFSEL; // differential mode selection register
	__IO uint32_t CALFACT; //calibration factors
} ADC_Typedef;
typedef struct {
	__IO uint32_t CR; // control register
	__IO uint32_t ICSCR; // 
	__IO uint32_t CFGR;
	__IO uint32_t PLLCFGR;
	__IO uint32_t PLLSAI1CFGR;
	__IO uint32_t CIER; //clock interrupt enable
	__IO uint32_t CIFR; //clock interrupt flag register
	__IO uint32_t CICR; // clock interrupt clear register
	__IO uint32_t AHB1RSTR; // ahb1 peripheral reset register
	__IO uint32_t AHB2RSTR; // ahb2 peripheral reset register
	__IO uint32_t AHB3RSTR; // ahb3 peripheral reset register
	__IO uint32_t APB1RSTR1; // apb1 peripheral reset register 1
	__IO uint32_t APB1RSTR2; // apb1 peripheral reset register 2
	__IO uint32_t APB2RSTR; // apb2 peripheral reset register
	__IO uint32_t AHB1ENR; // ahb1 peripheral clock enable register
	__IO uint32_t AHB2ENR; // ahb2 peripheral clock enable register
	__IO uint32_t AHB3ENR; // ahb3 peripheral clock enable
	__IO uint32_t APB1ENR1; // apb1 peripheral clock enable 1
	__IO uint32_t APB1ENR2; // apb1 peripheral clock enable 2
	__IO uint32_t APB2ENR; // apb2 peripheral clock enable
	__IO uint32_t AHB1SMENR; // ahb1 peripheral clocks enable in sleep/stop modes
	__IO uint32_t AHB2SMENR; // ahb2 peripheral clocks enable in sleep/stop modes
	__IO uint32_t AHB3SMENR; // ahb3 peripheral clocks enable in sleep/stop modes
	__IO uint32_t APB1SMENR1; //apb1 peripheral clocks enable in sleep/stop modes 1
	__IO uint32_t APB1SMENR2; //apb1 peripheral clocks enable in sleep/stop modes 2
	__IO uint32_t APB2SMENR; // apb2 peripheral clocks enable in sleep/stop modes
	__IO uint32_t CCIPR; // peripherals independent clock configuration
	__IO uint32_t BDCR; //backup domain control register
	__IO uint32_t CSR; // control/status register
	__IO uint32_t CRRCR; // clock recovery RC register
	__IO uint32_t CCIPR2; // peripherals independent clock configuration register
}RCC_Typedef;
typedef struct {
	__IO uint32_t CR1; // control register 1
	__IO uint32_t CR2; // control register 2
	__IO uint32_t OAR1; // own address 1 register
	__IO uint32_t OAR2; // own address 2 register
	__IO uint32_t TIMINGR; // timing register
	__IO uint32_t TIMEOUTR; // timeout register
	__IO uint32_t ISR; // interrupt and status register
	__IO uint32_t ICR; // interrupt clear register
	__IO uint32_t PECR; // PEC register ? (packet error checking)
	__IO uint32_t RXDR; // recieve data register
	__IO uint32_t TXDR; // transmit data register
}I2C_Typedef;


#define RCC_AHB2ENR (*((volatile unsigned long *) 0x4002104C)) //GPIO Enable Reg
#define GPIOB_MODER (*((volatile unsigned long *) 0x48000400)) //GPIO B Mode Reg
#define GPIOB_BSRR (*((volatile unsigned long *) 0x48000418)) //GPIO B Output Bit set/reset reg
#define LED_ON (1 << 3)
#define LED_OFF (1 << (3+16))
#define GPIOA_MODER (*((volatile unsigned long *) 0x48000000)) //GPIO A Mode Reg
#define GPIOA_PUPDR (*((volatile unsigned long *) 0x4800000C)) //GPIO pullup/down
#define GPIOA_AFRH 	(*((volatile unsigned long *) 0x48000024))	 //alternate function including PA8
#define MASTER_ADC1 (*((volatile unsigned long *) 0x50040000))
#define ADC_CR      (*((volatile unsigned long *) 0x50040008))
#define ADC_CCR     (*((volatile unsigned long *) 0x50040300))
#define	ADC_CFGR    (*((volatile unsigned long *) 0x5004000C))
#define ADC_SQR1    (*((volatile unsigned long *) 0x50040030))
#define TIM1        (*((volatile unsigned long *) 0x40012C00)) //timer 1
#define ADC ((ADC_Typedef *) 0x50040000)
