#include<stdio.h>

int main()
{
	int hour, speed;
	double fuel;
	scanf("%d %d", &hour, &speed);
	fuel=hour*speed/12.0;
	printf("%.3lf\n", fuel);
	return 0;
}
