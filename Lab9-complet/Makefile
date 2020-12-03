obj-m := testdriver.obj
KDIR  := /home/builduser/imx6sx-sdb/exfiles/ex2/kernel/
ARCH := arm
CROSS_COMPILE := arm-fslc-linux-gnueabi-
PWD	  := $(shell pwd)

default:
		make -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
		rm -rf *o