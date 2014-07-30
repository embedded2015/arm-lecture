CC	= arm-linux-gnueabihf-gcc
CFLAGS	= -O0 -ggdb -Wall
LDFLAGS = -fno-stack-protector

objects	= example5.o

default: example5

.PHONY: default clean

example5: $(objects)
	$(CC) -o $@ $^

example5.o: example5.c

%.o: %.c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f $(objects) example5

qemu:
	qemu-arm -L /usr/arm-linux-gnueabihf ./example5
