idf_component_register(
    SRCS "espnow_led_sender.c"
    INCLUDE_DIRS "."
    REQUIRES esp_wifi esp_event nvs_flash
)
