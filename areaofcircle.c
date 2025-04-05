#include<stdio.h>

int main()
{
    const double PI = 3.142;
    double radius;
    double circumfrence;
    double area;

    printf("Enter the radius \n");
    scanf("%lf", &radius);

    circumfrence = 2 * PI * radius ;
    area = PI * radius * radius;

    printf("circumfrence = %.2lf \n", circumfrence);
    printf("area = %.2lf",area);

    return 0 ;

}