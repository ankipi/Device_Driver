ifeq ($(KERNELRELEASE),)
 
    KERNEL_SOURCE := /usr/src/linux
    PWD := $(shell pwd)
default: module KSM_a
 
module:
    $(MAKE) -C $(KERNEL_SOURCE) SUBDIRS=$(PWD) modules
    gcc -o KSM_a  KSM_a.c
clean:
    $(MAKE) -C $(KERNEL_SOURCE) SUBDIRS=$(PWD) clean
    ${RM-f} KSM_a
 
                                                                            
else
 
    obj-m :=KSM_a.o
 endif
