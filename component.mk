#
# "main" pseudo-component makefile.
#
# (Uses default behaviour of compiling all source files in directory, adding 'include' to include path.)

ifdef CONFIG_AUDIO_BOARD_CUSTOM
COMPONENT_ADD_INCLUDEDIRS += ./esp32_s3_devkit
COMPONENT_SRCDIRS += ./esp32_s3_devkit

COMPONENT_ADD_INCLUDEDIRS += ./ics43434
COMPONENT_SRCDIRS += ./ics43434
endif
