TARGET = MAIN
TYPE = ps-exe

SRCS = main.c suitcase.c airport.c image.c \
		data/scan01.tim \
		data/hearts.tim \
		data/clubs.tim \
		data/palette_blue.tim data/palette_red.tim \
		../third_party/common/syscalls/printf.s \
		../third_party/common/crt0/crt0.s \
		dcLibPsx/src/dcMemory.c\
		dcLibPsx/src/dcCamera.c\
		dcLibPsx/src/dcMath.c\
		dcLibPsx/src/dcRender.c\
		dcLibPsx/src/dcInput.c\
		dcLibPsx/src/dcCollision.c\
		dcLibPsx/src/dcMisc.c\

CPPFLAGS += -I../third_party/common
CPPFLAGS += -I../third_party/psyq/include
CPPFLAGS += -I./dcLibPsx/include
CPPFLAGS += -Wno-unused-variable
LDFLAGS += -L../third_party/psyq/lib
LDFLAGS += -Wl,--start-group
LDFLAGS += -lapi
LDFLAGS += -lc
LDFLAGS += -lc2
LDFLAGS += -lcard
LDFLAGS += -lcomb
LDFLAGS += -lds
LDFLAGS += -letc
LDFLAGS += -lgpu
LDFLAGS += -lgs
LDFLAGS += -lgte
LDFLAGS += -lgpu
LDFLAGS += -lgun
LDFLAGS += -lhmd
LDFLAGS += -lmath
LDFLAGS += -lmcrd
LDFLAGS += -lmcx
LDFLAGS += -lpad
LDFLAGS += -lpress
LDFLAGS += -lsio
LDFLAGS += -lsnd
LDFLAGS += -lspu
LDFLAGS += -ltap
LDFLAGS += -Wl,--end-group

include ../third_party/common.mk
