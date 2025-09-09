#include "exercise10.h"
#include "exercise7.h" // Using void clearAllClock();
#include "exercise8.h" // Using void setNumberOnClock(int num);

#define LED_ON 1
#define LED_OFF 0

void exercise10_run(){
	int hr = 0;
	int min = 0;
	int sec = 0;

	while (1){
		clearAllClock();
		setNumberOnClock(hr);
		setNumberOnClock(min / 5);
		setNumberOnClock(sec / 5);
		++sec;
		if (sec >= 60){
			sec = 0;
			min++;
		}
		if (min >= 60){
			min = 0;
			hr++;
		}
		if (hr >= 12){
			hr = 0;
		}
		HAL_Delay(10);
	}
}
