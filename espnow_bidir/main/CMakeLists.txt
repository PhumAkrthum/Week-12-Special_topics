idf_component_register(
    SRCS "espnow_bidir.c"
    INCLUDE_DIRS "."
    REQUIRES esp_wifi nvs_flash esp_event esp_timer
)
