CFLAGS=-Werror
MODULE=farduino
SRCS=functions.c program.c $(MODULE).c
OBJS=$(SRCS:%.c=%.o)

all: $(OBJS)
	$(CC) -o $(MODULE) $^

.PHONY: clean

clean:
	@rm $(MODULE) $(OBJS)
