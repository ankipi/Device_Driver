obj-m+= prog_b.o

all:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules
	$(CC) prog_b.c -o prog
clean:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) clean
	rm prog


