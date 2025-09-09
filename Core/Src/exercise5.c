#include "exercise5.h"
#include "exercise4.h" // Using void display7SEG(int num);

#define LED_ON 0
#define LED_OFF 1

typedef enum{
	RED,
	YELLOW,
	GREEN
} TrafficLightState;

#define RED_TIME 5
#define YELLOW_TIME 2
#define GREEN_TIME 3

void exercise5_run(){
	TrafficLightState led_status1 = RED;
	int counter1 = RED_TIME;
	TrafficLightState led_status2 = GREEN;
	int counter2 = GREEN_TIME;

	while (1){
		display7SEG(counter1);
		if (led_status1 == RED){
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, LED_ON);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, LED_OFF);
			--counter1;
			if (counter1 <= 0){
				led_status1 = GREEN;
				counter1 = GREEN_TIME;
			}
		} else if (led_status1 == GREEN){
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, LED_ON);
			--counter1;
			if (counter1 <= 0){
				led_status1 = YELLOW;
				counter1 = YELLOW_TIME;
			}
		} else if (led_status1 == YELLOW){
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, LED_ON);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, LED_OFF);
			--counter1;
			if (counter1 <= 0){
				led_status1 = RED;
				counter1 = RED_TIME;
			}
		}
		display7SEG_2(counter2);
		if (led_status2 == RED){
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, LED_ON);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, LED_OFF);
			--counter2;
			if (counter2 <= 0){
				led_status2 = GREEN;
				counter2 = GREEN_TIME;
			}
		} else if (led_status2 == GREEN){
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, LED_ON);
			--counter2;
			if (counter2 <= 0){
				led_status2 = YELLOW;
				counter2 = YELLOW_TIME;
			}
		} else if (led_status2 == YELLOW){
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, LED_ON);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, LED_OFF);
			--counter2;
			if (counter2 <= 0){
				led_status2 = RED;
				counter2 = RED_TIME;
			}
		}
		HAL_Delay(1000);
	}
}

void display7SEG_2(int num){
	if (num == 0){
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_ON);
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_ON);
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_ON);
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_ON);
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_ON);
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_ON);
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
	} else if (num == 1){
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_ON);
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_ON);
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
	} else if (num == 2){
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_ON);
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_ON);
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_ON);
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_ON);
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_ON);
	} else if (num == 3){
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_ON);
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_ON);
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_ON);
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_ON);
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_ON);
	} else if (num == 4){
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_ON);
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_ON);
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_ON);
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_ON);
	} else if (num == 5){
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_ON);
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_ON);
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_ON);
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_ON);
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_ON);
	} else if (num == 6){
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_ON);
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_ON);
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_ON);
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_ON);
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_ON);
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_ON);
	} else if (num == 7){
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_ON);
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_ON);
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_ON);
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
	} else if (num == 8){
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_ON);
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_ON);
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_ON);
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_ON);
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_ON);
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_ON);
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_ON);
	} else if (num == 9){
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_ON);
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_ON);
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_ON);
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_ON);
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_ON);
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_ON);
	} else {
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, LED_OFF);
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, LED_OFF);
	}

}
