//jzhao, Feb.10th,2020
#include <linux/kernel.h>
#include <linux/sched.h>
asmlinkage int sys_helloworld (void){
	printk(KERN_EMERG "Hello World!\n");
	return 0;
}
