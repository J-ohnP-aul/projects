#include<stdio.h>

int main()
{
    char operator;
    double num1, num2, result;

    printf("\nenter an operator(+ - / *): ");
    scanf("%c", &operator);

    printf("\nEnter num1 : ");
    scanf("%lf", &num1);


    printf("\nEnter num2 : ");
    scanf("%lf", &num2);
    
    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\n%.2lf%c%.2lf", num1,operator,num2);
            printf("\nresult :%.2lf",result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n%.2lf%c%.2lf", num1,operator,num2);
            printf("\nresult :%.2lf",result);
            break;
        case '/':
            result = num1 / num2;
            printf("\n%.2lf%c%.2lf", num1,operator,num2);
            printf("\nresult :%.2lf",result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n%.2lf%c%.2lf", num1,operator,num2);
            printf("\nresult :%.2lf",result);
            break;
        default:
            printf("\n%c is not valid SYNTAX ERROR", operator);
    }

    return 0;
}