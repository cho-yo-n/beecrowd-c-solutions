#include<stdio.h>
int main()
{
	int p1, u1, p2, u2;
	double  pr1, pr2;
	scanf("%d %d %lf",  &p1, &u1, &pr1);
	scanf("%d %d %lf", &p2, &u2, &pr2);
	
	double A1, A2, A;
	A1=u1*pr1;
	A2=u2*pr2;
	A=A1+A2;
	
	printf("VALOR A PAGAR: R$ %.2lf\n", A);
	return 0;
}
