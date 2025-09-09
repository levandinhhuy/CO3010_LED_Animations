#include "exercise4.h"

#define LED_ON 0
#define LED_OFF 1

void exercise4_run(){
	int counter = 0;
	while (1){
		if (counter >= 10){
			counter = 0;
		}
		display7SEG(counter++);
		HAL_Delay(1000);
	}
}

void display7SEG(int num){
	if (num == 0){
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, LED_OFF);
	} else if (num == 1){
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, LED_OFF);
	} else if (num == 2){
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, LED_ON);
	} else if (num == 3){
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, LED_ON);
	} else if (num == 4){
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, LED_ON);
	} else if (num == 5){
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, LED_ON);
	} else if (num == 6){
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, LED_ON);
	} else if (num == 7){
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, LED_OFF);
	} else if (num == 8){
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, LED_ON);
	} else if (num == 9){
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_ON);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, LED_ON);
	} else {
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_OFF);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, LED_OFF);
	}
}
