#include<stdio.h>
#include<ctype.h>
int main()
{
    char unit;
    float temp;

    printf("is the tempreture in F or C ?\n");
    scanf("%c", &unit);

    unit = toupper(unit);//to convert inpt to uppercase

    if (unit == 'C'){
        printf("\nEnter the temp in celcius\n: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("the temp in Farenheight is %.2fF", temp);
    }
    else if(unit == 'F'){
        printf("\nEnter the temp in farenheight\n: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("the temp in celcius if %.2fC", temp);

    }
    else{
        printf("Use standard values F and C");
    }
    return 0;
}