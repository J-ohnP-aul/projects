#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,x1,d,x2,x;
    printf("enter coeficinet a,b,c\n");
    scanf("%f%f%f",&a, &b,&c);

    d = b*b - 4*(a*c);

    if(d>0){
        x1 = (-b + sqrt(d)/(2*a));
        x2 = (-b - sqrt(d)/(2*a));

        printf("distinct roots  x1 = %f  x2: %f \n", x1,x2);
    }
    else if (d==0){
        x = (-b/(2*a));
        printf("double roots = %f", x);

    }else{
        printf("\n complex roots");
    }


}
// gcc tquandraticeqtion.c -lm -o quad
