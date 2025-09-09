#include "exercise6.h"

#define LED_ON 1
#define LED_OFF 0

void exercise6_run(){
	int counter = 12;
	while (1){
		if (counter == 1){
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_ON);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, LED_OFF);
		} else if (counter == 2){
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_ON);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, LED_OFF);
		} else if (counter == 3){
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_ON);
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, LED_OFF);
		} else if (counter == 4){
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_ON);
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, LED_OFF);
		} else if (counter == 5){
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_ON);
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, LED_OFF);
		} else if (counter == 6){
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_ON);
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, LED_OFF);
		} else if (counter == 7){
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_ON);
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, LED_OFF);
		} else if (counter == 8){
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, LED_ON);
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, LED_OFF);
		} else if (counter == 9){
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, LED_ON);
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, LED_OFF);
		} else if (counter == 10){
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, LED_ON);
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, LED_OFF);
		} else if (counter == 11){
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, LED_ON);
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, LED_OFF);
		} else if (counter == 12){
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, LED_ON);
		} else {
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, LED_OFF);
		}
		--counter;
		if (counter <= 0) counter = 12;
		HAL_Delay(1000);
	}
}
