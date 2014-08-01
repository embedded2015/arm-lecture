CC	= arm-linux-gnueabihf-gcc
CFLAGS	= -O2 -ggdb -Wall
LDFLAGS = -fno-stack-protector

objects	= example1.o

default: example1

.PHONY: default clean clobber

example1: $(objects)
	$(CC) -o $@ $^

example1.o: example1.c

%.o: %.c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f $(objects) example1

qemu: example1
	@sh cmd
