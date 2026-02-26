#include<stdio.h>
int main ()
{
    int X, Y;
    double Bill;

    scanf("%d%d", &X, &Y);

    if (X==1)
    {
        Bill=Y*4.00;
    }
    else if (X==2)
    {
        Bill=Y*4.50;
    }
    else if (X==3)
    {
        Bill=Y*5.00;
    }

    else if (X==4)
    {
        Bill=Y*2.00;
    }
    else if (X==5)
    {
        Bill=Y*1.50;
    }


    printf("Total: R$ %.2lf\n", Bill);

    return 0;

}
