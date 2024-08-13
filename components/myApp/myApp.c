#include <stdio.h>
#include "myApp.h"

#include <esp_log.h>

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <freertos/event_groups.h>

static const char *TAG = "app";

void func(void)
{
    ESP_LOGI(TAG, "Hello World2!");
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}
