//LED2 PA10

#include"stm32f4xx.h"
#include"initialsetting.h"
int main( void)
{

	SystemInit();
	GPIO_Configuration();
//	NVIC_Configuration();
//	USART2_Configuration();
//	USART6_Configuration();
	GPIO_SetBits(GPIOA,GPIO_Pin_10);
//	if(SysTick_Config(SystemCoreClock / 1000)){
//		while(1);
//	}
/*	while(1){
//		while(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_0));
		GPIO_SetBits(GPIOA,GPIO_Pin_10);
		tdelay(1000);
		GPIO_ResetBits(GPIOA,GPIO_Pin_10);
		tdelay(1000);
	}
*/
}
/*
void USART2_IRQHandler( void){
	if( USART_GetITStatus( USART2,USART_IT_RXNE) != RESET){
		USART_ClearFlag( USART2,USART_FLAG_RXNE);
		( uint8_t) USART_ReceiveData( USART2);
	}
}

void send_exp_USART6(void){
	static uint8_t counter = 0;
	switch(counter%4){
	case 0:	while( USART_GetFlagStatus( USART6,USART_FLAG_TXE)==RESET);
			USART_SendData( USART6,0b10000001);
			break;
	case 1:	while( USART_GetFlagStatus( USART6,USART_FLAG_TXE)==RESET);
			USART_SendData( USART6,0b00000001);
			break;
	case 2:	while( USART_GetFlagStatus( USART6,USART_FLAG_TXE)==RESET);
			USART_SendData( USART6,0b10000010);
			break;
	case 3:	while( USART_GetFlagStatus( USART6,USART_FLAG_TXE)==RESET);
			USART_SendData( USART6,0b00000010);
			break;
	default:;
	}
	counter++;
	return;
}
*/
