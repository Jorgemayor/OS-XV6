#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{

	int ticks = 4000;
	int time = 60*uptime()/ticks;

	if(time < 60)
	{
		printf(2, "Time: %d Ticks: %d\n", time, ticks);
	}
	else
	{
		int seconds = time%60;
		int minutes = time/60;
		if(minutes < 60)
		{
			printf(2, "Time: %d:%d Ticks: %d\n", minutes, seconds, ticks);
		}
		else
		{
			int hours = minutes/60;
			minutes = minutes%60;
			printf(2, "Time: %d:%d:%d Ticks: %d\n", hours, minutes, seconds, ticks);
		} 
	}
	exit();
}
