CC	= arm-linux-gnueabihf-gcc
AS	= arm-linux-gnueabihf-as
CFLAGS	= -O2 -ggdb -Wall
LDFLAGS = -fno-stack-protector

objects	= example2.o multiply.o

default: example2

.PHONY: default clean clobber

example2: $(objects)
	$(CC) -o $@ $^

example2.o: example2.c

%.o: %.c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $<

%.o: %.s
	$(AS) -o $@ $<
clean:
	rm -f $(objects) example2

qemu: example2
	qemu-arm -L /usr/arm-linux-gnueabihf ./example2
