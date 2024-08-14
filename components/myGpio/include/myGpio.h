#include "driver/gpio.h"

#define ESP_INTR_FLAG_DEFAULT 0
#define GPIO_INPUT_IO_0     9
#define GPIO_INPUT_PIN_SEL  (1ULL<<GPIO_INPUT_IO_0) 

void  initBtnGpio();