#include<stdio.h>
int main ()
{

    double A, B, C, R1, R2, D;

    D=(B*B)-4*A*C;
    R1= (-B+D)/(2*A);
    R2= (-B-D)/(2*A);


    scanf("%lf%lf%lf", &A, &B, &C);

    if (A==0 || ((B*B)-4*A*C<0))
    {
        printf("Impossivel calcular");
    }
    else
    {
        printf("R1=%.5lf\nR2=%5lf\n", R1, R2);


    }

    return 0;

}
