max@max-VirtualBox: ~/projects/eltex5/lab2$ sudo insmod main.ko

max@max-VirtualBox: ~/projects/eltex5/lab2$ sudo su -

root@max-VirtualBox: ~# echo "Hello, Eltex!" > /proc/eltexM5

root@max-VirtualBox: ~# cat /proc/eltexM5

Hello, Eltex!

root@max-VirtualBox: ~# rmmod main.ko

root@max-VirtualBox: ~# exit

выход
