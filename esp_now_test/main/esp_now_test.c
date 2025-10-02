#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

static const char* TAG = "ESPNOW_TEST";

void app_main(void)
{
    ESP_LOGI(TAG, "ESP-NOW Test Project Started!");
    
    while(1) {
        ESP_LOGI(TAG, "Hello ESP-NOW!");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}