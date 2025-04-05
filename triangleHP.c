#include<stdio.h>
#include<math.h>
int main ()
{
    double A,B,C;
    
    printf("Enter side A and B respectively \n");
    scanf("%lf %lf", &A, &B);

    C = sqrt(A*A + B*B);

    printf("side C =%.2lf", C);
    return 0;
}
// gcc triangleHP.c -lm -o hyp