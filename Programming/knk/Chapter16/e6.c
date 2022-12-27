/*
Write the following function, assuming that the time structure contains three members: 
hours, minutes and seconds (all of type int).

struct time split_time(long total_seconds);
total_seconds is a time represented as the number of seconds since midnight. 
The function returns a structure containing the equivalent time in hours (0-23), 
minutes (0-59) and seconds (0-59).
*/
#include <stdio.h>

struct time {
	int hours;
    int minutes; 
    int seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
	struct time t1;
	
	t1 = split_time(30000);
	
	printf("%d %d %d\n", t1.hours, t1.minutes, t1.seconds);
	
	return 0;
}

struct time split_time(long total_seconds)
{
	struct time t1;
	
	t1.seconds = total_seconds % 60;
	total_seconds /= 60;
	t1.minutes = total_seconds % 60;
	total_seconds /= 60;
	t1.hours = total_seconds % 24;
	
	return t1;
}