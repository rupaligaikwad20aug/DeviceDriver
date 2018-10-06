

// kernel module which accept input while inserting

#include<linux/init.h>
#include<linux/moduleparam.h>
#include<linux/stat.h>
#include<linux/module.h>
#include<linux/device.h>
#include<linux/kernel.h>
#include<linux/fs.h>
#include<asm/uaccess.h>

#define DRIVER_AUTHOR "piyush khairnar"
#define DRIVER_DESC "Marvellous demo module with arguments"

int myint = 21;

module_param(myint, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

MODULE_PARM_DESC(myint,"Integer variable");

static int __init hello_5_init(void)
{
	printk(KERN_INFO "Marvellous : Removing module\n");
	return 0;
}

static void __exit hello_5_exit(void)    
{
	printk(KERN_INFO "Marvellous : Removing module\n");   
	return 0; 
}

module_init(hello_5_init);
module_exit(hello_5_exit);



//#define DEVICE_NAME "Marvellous Driver 1"
//#define CLASS_NAME "Marvellous Driver"

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
//MODULE_VERSION("GPL");


/*

//makefile of this kernel (module5.c)
obj-m +=module5.c

all:
mask -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

*/













