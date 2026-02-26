#include<stdio.h>
int main()
{
	int NUMBER, Hour;
	double  Amount, SALARY;
	scanf("%d %d %lf",  &NUMBER, &Hour, &Amount);
	SALARY=Hour*Amount;
	printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = U$ %.2lf\n", SALARY);
	return 0;
}
