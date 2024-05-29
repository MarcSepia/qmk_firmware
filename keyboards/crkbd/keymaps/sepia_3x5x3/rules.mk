###### v3
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = no
# BONGO_ENABLED     = yes

LTO_ENABLE = yes
EXTRAKEY_ENABLE = yes
WPM_ENABLE = yes
AUTO_SHIFT_ENABLE = no

# added stuff to optimize compiled size
TAP_DANCE_ENABLE = yes

# ifeq ($(BONGO_ENABLED), yes)
#     OPT_DEFS += -DBONGO_ENABLED
# else
#     OPT_DEFS += -DLUNA_ENABLED
# endif

BOOTLOADER = atmel-dfu
ifeq ($(PROMICRO), yes)
    BOOTLOADER = caterina
endif
