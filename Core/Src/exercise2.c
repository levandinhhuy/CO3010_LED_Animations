#include "exercise2.h"

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

void exercise2_run(){
	TrafficLightState led_status = RED;
	int counter = RED_TIME;

	while (1){
		if (led_status == RED){
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, LED_ON);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, LED_OFF);
			--counter;
			if (counter <= 0){
				led_status = GREEN;
				counter = GREEN_TIME;
			}
		} else if (led_status == GREEN){
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, LED_ON);
			--counter;
			if (counter <= 0){
				led_status = YELLOW;
				counter = YELLOW_TIME;
			}
		} else if (led_status == YELLOW){
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, LED_OFF);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, LED_ON);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, LED_OFF);
			--counter;
			if (counter <= 0){
				led_status = RED;
				counter = RED_TIME;
			}
		}
		HAL_Delay(1000);
	}
}

