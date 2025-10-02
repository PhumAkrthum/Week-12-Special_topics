idf_component_register(
    SRCS "espnow_led_receiver.c"
    INCLUDE_DIRS "."
    REQUIRES esp_wifi esp_event nvs_flash esp_driver_ledc
)