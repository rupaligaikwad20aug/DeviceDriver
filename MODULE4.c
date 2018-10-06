// MODULE4    kernel module which register author name and description

#include<linux/init.h>
//#include<linux/moduleparam.h>
//#include<linux/stat.h>
#include<linux/module.h>
//#include<linux/device.h>
#include<linux/kernel.h>
//#include<linux/fs.h>
//#include<asm/uaccess.h>

#define DRIVER_AUTHOR "rupali"
#define DRIVER_DESC "Marvellous demo module"

//int myint = 21;

//module_param(myint, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

//MODULE_PARM_DESC(myint, "Integer variable");

static int __init init_hello_4(void)
{
	printk(KERN_INFO "Marvellous : loading module\n");
	return 0;
}

static void __exit cleanup_hello_4(void)
{
	printk(KERN_INFO"Marvellous : removing module\n");
}

module_init(init_hello_4);
module_exit(cleanup_hello_4);



//#define DEVICE_NAME "Marvellous Driver 1"
//#define CLASS_NAME "Marvellous Driver"

//MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
//MODULE_VERSION("GPL");


/*

makefile of this kernel module  (module4.c)

obj-m +=module4.o

all:
		make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules


*/













