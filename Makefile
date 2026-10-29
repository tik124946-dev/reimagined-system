TARGET := NoomiSwitch
BUILD := build
SOURCES := source
INCLUDES := include

DATA :=
ROMFS := romfs

APP_TITLE := NoomiSwitch
APP_AUTHOR := Homebrew prototype
APP_VERSION := 0.1.0

CFLAGS := -O2 -Wall -Wextra
CXXFLAGS := $(CFLAGS) -std=gnu++17
LDFLAGS :=

include $(DEVKITPRO)/libnx/switch_rules
