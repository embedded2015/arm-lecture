CC	= arm-linux-gnueabihf-gcc
CFLAGS	= -O0 -ggdb -Wall
LDFLAGS = -fno-stack-protector

objects	= example6.o

default: example6

.PHONY: default clean

example6: $(objects)
	$(CC) -o $@ $^

example6.o: example6.c

%.o: %.c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f $(objects) example6

qemu: example6
	qemu-arm -L /usr/arm-linux-gnueabihf ./example6
