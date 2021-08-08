PROTOCOL_DIR = protocol
RIOT_DIR = protocol/riot

#SRC += $(RIOT_DIR)/i2c_master.c
SRC += $(DRIVER_PATH)/riot/i2c_master.c

SRC += $(LIBSRC)

VPATH += $(TMK_PATH)/$(PROTOCOL_DIR)
VPATH += $(TMK_DIR)/$(RIOT_DIR)
