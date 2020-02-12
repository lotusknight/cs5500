//jzhao, Feb.10th,2020
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/module.h>

asmlinkage int sys_print_other (int pid){
	struct task_struct *task,*other;
	for_each_process(task){
		if (task->pid == pid){ 
					other = task;
					break;
		}
	}
	if(!other){
		printk(KERN_EMERG "No such process!\n");
		return 0;
	}
	for(task = other; task != &init_task; task = task->parent){
	printk(KERN_EMERG "%s [%d]\n", task->comm, task->pid);
	}
	return 0;
}
