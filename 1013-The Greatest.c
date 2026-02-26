#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c, MajorAB, Greatest;
	
	scanf("%d %d %d", &a, &b, &c);
	
	MajorAB=((a+b)+abs(a-b))/2;
	Greatest=((MajorAB+c)+abs(MajorAB-c))/2;
	
	printf("%d eh o maior\n", Greatest);
	return 0;
}
