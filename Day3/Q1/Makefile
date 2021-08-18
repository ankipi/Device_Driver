##ifneq($(KERNELRELEASE),)                                                      
        obj-m+=add.o avg.o

##else                                                                          
        KDIR=/lib/modules/$(shell uname -r)/build/
        PWD:=$(shell pwd)

default:
        $(MAKE) -C $(KDIR) M=$(PWD) modules
       

clean:
        $(MAKE) -C $(KDIR) M=$(PWD) clean
       rm -rf /lib/modules/$(shell uname -r)/extra/*

install:
        $(MAKE) -C $(KDIR) M=$(PWD) modules_install
        depmod -a

#endif                                                                           


