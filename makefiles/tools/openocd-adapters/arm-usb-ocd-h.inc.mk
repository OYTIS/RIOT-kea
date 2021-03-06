# Olimex ARM-USB-OCD-H debug adapter
OPENOCD_ADAPTER_INIT ?= -c 'source [find interface/ftdi/olimex-arm-usb-ocd-h.cfg]'
# Add serial matching command, only if DEBUG_ADAPTER_ID was specified
ifneq (,$(DEBUG_ADAPTER_ID))
  OPENOCD_ADAPTER_INIT += -c 'ftdi_serial $(DEBUG_ADAPTER_ID)'
endif
export OPENOCD_ADAPTER_INIT
