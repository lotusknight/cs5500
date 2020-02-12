//jzhao, Feb.10th,2020
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/module.h>

asmlinkage int sys_print_self (void){
	struct task_struct *task;
	for(task = current; task != &init_task; task = task->parent){
	printk(KERN_EMERG "%s [%d]\n", task->comm, task->pid);
	}
	return 0;
}
