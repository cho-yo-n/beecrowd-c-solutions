#include<stdio.h>
int main()
{
	int X;
	double Y, fuel;
	scanf("%d %lf", &X, &Y);
    fuel=X/(double)Y;
	printf("%.3lf km/l\n", fuel);
	return 0;
}
