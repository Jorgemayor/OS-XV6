#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{

	int ticks = 100;
	if(argc > 1)
	{
		//ticks = atoi(argv[1]);
	}

	int time = uptime();
	printf(2, "%d\n", time);
	if(time < 60)
	{
		printf(2, "Time: %d\n", time);
	}
	else
	{
		int seconds = time%60;
		int minutes = time/60;
		if(minutes < 60)
		{
			printf(2, "Time: %d:%d\n", minutes, seconds);
		}
		else
		{
			int hours = minutes/60;
			minutes = minutes%60;
			printf(2, "Time: %d:%d:%d\n", hours, minutes, seconds);
		} 
	}
	printf(2, "uptime working %d %d\n", ticks, time);
	exit();
}
