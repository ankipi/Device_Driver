##ifneq($(KERNELRELEASE),)                                                     
                                                                     
obj-m:=my_cal_driver.o
##else
  
KDIR=/lib/modules/$(shell uname -r)/build
PWD:=$(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules
	gcc -o add add.c
	gcc -o sub sub.c
	gcc -o multi multi.c
	gcc -o divide divide.c

clean:
	make -C $(KDIR) M=$(PWD) clean
	rm -rf add
	rm -rf sub
	rm -rf multi
	rm -rf divide
	
##endif 	
