
#Defining MCU
MCU = atmega32u4
#MCU speed (16mhz)
F_CPU = 16000000
#MCU architecture
ARCH = AVR8
#USB transfer speed
F_USB = $(F_CPU)

#Bootloader that pro micro uses
BOOTLOADER = caterina


#Build options

#Defining keyboard as split keyboard
SPLIT_KEYBOARD = yes

MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = yes
AUDIO_ENABLE = no
MIDI_ENABLE = no
BACKLIGHT_ENABLE = no
NKRO_ENABLE = no
SLEEP_LED_ENABLE = no