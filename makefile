CFLAGS=-Werror
MODULE=farduino

all: $(MODULE)

.PHONY: clean

clean:
	@rm $(MODULE)
