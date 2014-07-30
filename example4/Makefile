CC	= arm-linux-gnueabihf-gcc
CFLAGS	= -O2 -ggdb -Wall
LDFLAGS = -fno-stack-protector

objects	= example4.o

default: example4

.PHONY: default clean

example4: $(objects)
	$(CC) -o $@ $^

example4.o: example4.c

%.o: %.c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f $(objects) example4

qemu: example4
	qemu-arm -L /usr/arm-linux-gnueabihf ./example4
