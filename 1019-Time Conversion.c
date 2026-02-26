#include<stdio.h>

int main()
{
	int seconds, hours, minutes;
	
	scanf("%d",  &seconds);
	
	hours=seconds/3600;
	seconds=seconds-(3600*hours);
	minutes=seconds/60;
	seconds=seconds-(minutes*60);
	
	printf("%d:%d:%d\n", hours, minutes, seconds);
	return 0;
}
