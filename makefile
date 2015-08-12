UNO_FLAGS=-I/usr/share/arduino/hardware/arduino/variants/standard -D__AVR_ATmega328P__ -D__ATTR_PROGMEM__="" 
ARDUINO_INCLUDES=-I/usr/lib/avr/include/ -I/usr/share/arduino/hardware/arduino/cores/arduino
CFLAGS=-Werror $(UNO_FLAGS) $(ARDUINO_INCLUDES)
MODULE=farduino
SRCS=functions.c program.c $(MODULE).c
OBJS=$(SRCS:%.c=%.o)

all: $(OBJS)
	$(CC) -o $(MODULE) $^

.PHONY: clean

clean:
	@rm $(MODULE) $(OBJS)
