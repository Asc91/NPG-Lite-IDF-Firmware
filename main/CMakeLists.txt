idf_component_register(SRCS main.c src/gap.c src/gatt.c
                       PRIV_REQUIRES bt nvs_flash esp_driver_gpio esp_adc esp_pm
                       INCLUDE_DIRS "./include")

