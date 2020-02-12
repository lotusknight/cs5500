#include <linux/unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <stdio.h>
#define __NR_print_other	339
int main(int argc, char *argv[]) {
	int pid;
	switch(argc){
		case 1:
			printf("Please input the pid: ");
			scanf("%d",&pid);
			syscall(__NR_print_other, pid);
			break;
		case 2:
			pid = atoi(argv[1]);
//			printf("The pid is: %d", pid);
			syscall(__NR_print_other, pid);
			break;
		default:
			printf("Wrong input argument from cmd.\n");
			break;
	}
	return 0;
}
