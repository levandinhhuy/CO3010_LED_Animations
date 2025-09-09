#include "exercise1.h"

#define LED_ON 0
#define LED_OFF 1

void exercise1_run()
{
    HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, LED_OFF);
    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, LED_ON);

    while (1){
        HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
        HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
        HAL_Delay(2000);
    }
}
