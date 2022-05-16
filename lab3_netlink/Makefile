obj-m += netlink.o
 
all: netlink
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
netlink: 
	gcc -o net netlinkUser.c 
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
	rm -f net