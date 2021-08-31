#include<stdint.h>

#define SRAM_START 
#define SRAM_SIZE
#define SRAM_END 0
#define STACK_START SRAM_END
/**
 * ARM CORE VECTORS -->
 */
void Reset_Handler(void)	__attribute__((weak, alias("Default_Handler")));
// Reset handler-> initial program counter
void NMI_Handler(void) __attribute__((weak, alias("Default_Handler")));
void Hardfault_Handler(void)	__attribute__((weak, alias("Default_Handler")));
void MemManage_Handler(void) __attribute__((weak, alias("Default Handler")));
void BusFault_Handler(void) __attribute__((weak, alias("Default Handler")));
void UsageFault_Handler(void) __attribute__((weak, alias("Default Handler")));
void SVC_Handler(void) __attribute__((weak, alias("Default Handler")));
void DebugMonitor_Handler(void) __attribute__((weak, alias("Default Handler")));
void PendSV_Handler(void) __attribute__((weak, alias("Default Handler")));
void SysTick_Handler(void) __attribute__((weak, alias("Default Handler")));
/**
 * NON-CORE VECTORS -->
 */
void DMA_0_16_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_1_17_TX_IRQHandler(void)		__attribute__((weak, alias("Default Handler")));
void DMA_2_18_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_3_19_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_4_20_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_5_21_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_6_22_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_7_23_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_8_24_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_9_25_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_10_26_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_11_27_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_12_28_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_13_29_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_14_30_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_15_31_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void DMA_ERR_IRQHandler(void) 			__attribute__((weak, alias("Default Handler")));
void MCM_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void FLASH_CMD_CMPLT_IRQHandler(void) 	__attribute__((weak, alias("Default Handler")));
void FLASH_RD_COLSN_IRQHandler(void) 	__attribute__((weak, alias("Default Handler")));
void Mode_Cntrl_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void LLWU_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void WDOG_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void RNG_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void I2C0_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void I2C1_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void I2C2_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void I2C3_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void SPI0_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void SPI1_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void SPI2_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void I2S0_TX_IRQHandler(void) 			__attribute__((weak, alias("Default Handler")));
void I2S0_RX_IRQHandler(void) 			__attribute__((weak, alias("Default Handler")));
void UART0_Status_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void UART0_ERR_IRQHandelr(void) 		__attribute__((weak, alias("Default Handler")));
void UART1_Status_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void UART1_ERR_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void UART2_Status_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void UART2_ERR_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void UART3_Status_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void UART3_ERR_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void UART4_Status_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void UART4_ERR_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void ADC0_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void ADC1_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void CMP0_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void CMP1_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void CMP2_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void CMP3_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void FTM0_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void FTM1_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void FTM2_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void FTM3_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void CMT_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void RTC_Alarm_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void RTC_Seconds_IRQhandler(void) 		__attribute__((weak, alias("Default Handler")));
void PIT0_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void PIT1_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void PIT2_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void PIT3_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void PDB_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void USBFS_OTG_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void USBFS_CHRG_DTCT_IRQHandler(void) 	__attribute__((weak, alias("Default Handler")));
void DAC0_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void DAC1_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void MCG_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void LPTMR_IRQHandler(void) 			__attribute__((weak, alias("Default Handler")));
void PORTA_PIN_DTCT_IRQHandler(void) 	__attribute__((weak, alias("Default Handler")));
void PORTB_PIN_DTCT_IRQHandler(void) 	__attribute__((weak, alias("Default Handler")));
void PORTC_PIN_DTCT_IRQHandler(void) 	__attribute__((weak, alias("Default Handler")));
void PORTD_PIN_DTCT_IRQHandler(void) 	__attribute__((weak, alias("Default Handler")));
void PORTE_PIN_DTCT_IRQHandler(void) 	__attribute__((weak, alias("Default Handler")));
void Software_IRQHnadler(void) 			__attribute__((weak, alias("Default Handler")));
void CAN0_ORMsgBuf_IRQHandler(void) 	__attribute__((weak, alias("Default Handler")));
void CAN0_BusOff_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void CAN0_ERR_IRQHandler(void) 			__attribute__((weak, alias("Default Handler")));
void CAN0_TX_WRNG_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void CAN0_RX_WRNG_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void CAN0_WakeUp_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void CAN1_ORMsgBuf_IRQHandler(void) 	__attribute__((weak, alias("Default Handler")));
void CAN1_BusOff_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void CAN1_ERR_IRQHandler(void) 			__attribute__((weak, alias("Default Handler")));
void CAN1_TX_WRNG_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void CAN1_RX_WRNG_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void CAN1_WakeUp_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void SDHC_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void ETHMAC_TMRInt_IRQHandler(void) 	__attribute__((weak, alias("Default Handler")));
void ETHMAC_TX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void ETHMAC_RX_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void ETHMAC_ERR_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));
void LPUART0_Stat_ERR_IRQHandler(void) 	__attribute__((weak, alias("Default Handler")));
void TSI0_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void TPM1_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void TPM2_IRQHandler(void) 				__attribute__((weak, alias("Default Handler")));
void USBHS_DCD_Phy_IRQHandler(void) 	__attribute__((weak, alias("Default Handler")));
void USBHS_OTG_IRQHandler(void) 		__attribute__((weak, alias("Default Handler")));

uint32_t vectors[]	__attribute__((section(".isr_vectors"))) = {
	STACK_START,
	(uint32_t)&Reset_Handler,
	(uint32_t)&NMI_Handler,
	(uint32_t)&Hardfault_Handler,
	(uint32_t)&MemManage_Handler,
	(uint32_t)&BusFault_Handler,
	(uint32_t)&UsageFault_Handler,
	0,
	0,
	0,
	0,
	(uint32_t)&SVC_Handler,
	(uint32_t)&DebugMonitor_Handler,
	0,
	(uint32_t)&PendSV_Handler,
	(uint32_t)&SysTick_Handler,
	(uint32_t)&DMA_0_16_TX_IRQHandler,
	(uint32_t)&DMA_1_17_TX_IRQHandler,
	(uint32_t)&DMA_2_18_TX_IRQHandler,
	(uint32_t)&DMA_3_19_TX_IRQHandler,
	(uint32_t)&DMA_4_20_TX_IRQHandler,
	(uint32_t)&DMA_5_21_TX_IRQHandler,
	(uint32_t)&DMA_6_22_TX_IRQHandler,
	(uint32_t)&DMA_7_23_TX_IRQHandler,
	(uint32_t)&DMA_8_24_TX_IRQHandler,
	(uint32_t)&DMA_9_25_TX_IRQHandler,
	(uint32_t)&DMA_10_26_TX_IRQHandler,
	(uint32_t)&DMA_11_27_TX_IRQHandler,
	(uint32_t)&DMA_12_28_TX_IRQHandler,
	(uint32_t)&DMA_13_29_TX_IRQHandler,
	(uint32_t)&DMA_14_30_TX_IRQHandler,
	(uint32_t)&DMA_15_31_TX_IRQHandler,
	(uint32_t)&DMA_ERR_IRQHandler,
	(uint32_t)&MCM_IRQHandler,
	(uint32_t)&FLASH_CMD_CMPLT_IRQHandler,
	(uint32_t)&FLASH_RD_COLSN_IRQHandler,
	(uint32_t)&Mode_Cntrl_IRQHandler,
	(uint32_t)&LLWU_IRQHandler,
	(uint32_t)&WDOG_IRQHandler,
	(uint32_t)&RNG_IRQHandler,
	(uint32_t)&I2C0_IRQHandler,
	(uint32_t)&I2C1_IRQHandler,
	(uint32_t)&SPI0_IRQHandler,
	(uint32_t)&SPI1_IRQHandler,
	(uint32_t)&I2S0_TX_IRQHandler,
	(uint32_t)&I2S0_RX_IRQHandler,
	0,
};

void Default_Handler(void){
	while(1);
}

void Reset_Handler(void){
	//copy .data section to Sram
	//init the .bss section to zero in sram
	//call init function of std. library- only when using std library functions
	//call main()
}	