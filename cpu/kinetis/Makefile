# define the module that is build
MODULE = cpu

# add a list of subdirectories that should also be built
DIRS = periph $(RIOTCPU)/cortexm_common

# (file triggers compiler bug. see https://github.com/RIOT-OS/RIOT/issues/5775)
SRC_NOLTO += vectors.c

ifneq (,$(filter can_kea_mscan,$(USEMODULE)))
  DIRS += mscan
endif

include $(RIOTBASE)/Makefile.base
