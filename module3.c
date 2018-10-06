// MODULE3      kernel modulw which use global variable in it

#include<linux/init.h>
//#include<linux/moduleparam.h>
//#include<linux/stat.h>
#include<linux/module.h>
//#include<linux/device.h>
#include<linux/kernel.h>
//#include<linux/fs.h>
//#include<asm/uaccess.h>

static int hello3_data __initdata = 21;
//#define DRIVER_AUTHOR "rupali"
//#define DRIVER_DESC "Marvellous demo module"

//int myint = 21;

//module_param(myint, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

//MODULE_PARM_DESC(myint, "Integer variable");*/

static int __init hello_3_init(void)
{
	printk(KERN_INFO "Marvellous : module inserted with data %d\n",hello3_data);
	return 0;
}

static void __exit hello_3_exit(void)
{
	printk(KERN_INFO"Marvellous : module removed\n");
}

module_init(hello_3_init);
module_exit(hello_3_exit);



//#define DEVICE_NAME "Marvellous Driver 1"
//#define CLASS_NAME "Marvellous Driver"

//MODULE_LICENSE("GPL");
//MODULE_AUTHOR(DRIVER_AUTHOR);
//MODULE_DESCRIPTION(DRIVER_DESC);
//MODULE_VERSION("GPL");

/*

Makefile of this kernel module (module3.c)
obj-m +=module3.o

all:
		make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

*/














