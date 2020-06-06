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

	if(nsyscall >= 24 || nsyscall == 0 || nsyscall < -1){
		printf(1, "Syscall number %d not supported\n", nsyscall);
	} else {
		numinv(nsyscall);
	}
 	exit();
}

