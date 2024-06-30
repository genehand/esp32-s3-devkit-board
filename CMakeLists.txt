# Edit following two lines to set component requirements (see docs)
set(COMPONENT_REQUIRES)
set(COMPONENT_PRIV_REQUIRES audio_sal audio_hal esp_dispatcher esp_peripherals display_service)

if(CONFIG_AUDIO_BOARD_CUSTOM)
message(STATUS "Current board name is ESP32-S3-DevKitC-1")
list(APPEND COMPONENT_ADD_INCLUDEDIRS ./esp32_s3_devkit ./ics43434 ./pcm5102)
set(COMPONENT_SRCS
./esp32_s3_devkit/board.c
./esp32_s3_devkit/board_pins_config.c
./ics43434/ics43434.c
./pcm5102/pcm5102.c
)
endif()

register_component()

idf_component_get_property(audio_board_lib audio_board COMPONENT_LIB)
set_property(TARGET ${audio_board_lib} APPEND PROPERTY INTERFACE_LINK_LIBRARIES ${COMPONENT_LIB})
