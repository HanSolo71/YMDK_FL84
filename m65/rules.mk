# MCU name
MCU = STM32F401
BOOTLOADER = tinyuf2
# Build Options
#   change yes to no to disable
KEYBOARD_SHARED_EP = yes
BOOTMAGIC_ENABLE = yes     # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes      # Mouse keys
EXTRAKEY_ENABLE = yes      # Audio control and System control
COMMAND_ENABLE = no       # Commands for debug and configuration
BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
CONSOLE_ENABLE = yes        # Console for debug
NKRO_ENABLE = no
SLEEP_LED_ENABLE = no        # Enable N-Key Rollover
RGB_MATRIX_ENABLE = yes
WS2812_DRIVER = pwm
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = usart
UARTENABLE = yes

SRC += rtt_viewer/SEGGER_RTT_printf.c
SRC += rtt_viewer/SEGGER_RTT.c
