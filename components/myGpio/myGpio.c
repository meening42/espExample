#include <stdio.h>
#include "driver/gpio.h"
#include "myGpio.h"

void  initBtnGpio(){
    // Zero-initialize the config structure.
    gpio_config_t io_conf = {};
    // Interrupt of rising edge
    io_conf.intr_type = GPIO_INTR_POSEDGE;
    // Bit mask of the pins, use GPIO4/5 here
    io_conf.pin_bit_mask = GPIO_INPUT_PIN_SEL;
    // Set as input mode
    io_conf.mode = GPIO_MODE_INPUT;
    // Enable pull-up mode
    io_conf.pull_up_en = 1;
    gpio_config(&io_conf);

    // Change gpio interrupt type for one pin
    gpio_set_intr_type(GPIO_INPUT_IO_0, GPIO_INTR_POSEDGE);
}