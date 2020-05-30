#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
	int nsyscall = -1;
	if (argc == 2) {
	nsyscall = atoi(argv[1]);
	}
	if (nsyscall == -1) {
		for(int i=1; i<23; i++)
		{
  			//printAllSyscalls(i);
		}
	} else {
		//printSyscall(nsyscall);
	}
 exit();
}

