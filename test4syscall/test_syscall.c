#include <linux/unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <stdio.h>
//#include <stdlib.h>
#include <sys/wait.h>

#define __NR_helloworld		337
#define __NR_print_self		338
#define __NR_print_other	339
int main(int argc, char *argv[]) {
	int pid;
	printf("\n");
	printf("-------------------------------------------------------\n");
	printf("\n");
	printf("********************************\n");
	printf("**           Task 1           **\n");
	printf("********************************\n");
	syscall(__NR_helloworld);
	sleep(1);
	printf("\n");
	printf("\n");
	printf("********************************\n");
	printf("**           Task 2           **\n");
	printf("********************************\n");
	syscall(__NR_print_self);
	sleep(1);
	printf("\n");
	printf("\n");
	printf("********************************\n");
	printf("**           Task 3           **\n");
	printf("********************************\n");
	printf("\n");
	switch(argc){
		case 1:
			printf("Please input the pid: ");
			scanf("%d",&pid);
			syscall(__NR_print_other, pid);
			break;
		case 2:
			pid = atoi(argv[1]);
			syscall(__NR_print_other, pid);
			break;
		default:
			printf("Wrong input argument from cmd.\n");
			break;
	}
	sleep(1);
	printf("\n");
	printf("-------------------------------------------------------\n");
	printf("\n");
	printf("All tasks finished.\n");
	return 0;
}
