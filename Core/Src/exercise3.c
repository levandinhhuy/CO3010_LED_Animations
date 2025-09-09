#include "exercise3.h"

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

void exercise3_run(){
	TrafficLightState led_status1 = RED;
	int counter1 = RED_TIME;
	TrafficLightState led_status2 = GREEN;
	int counter2 = GREEN_TIME;

	while (1){
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
