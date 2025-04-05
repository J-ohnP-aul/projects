#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char input[100];
    int num;
    float fnum;
    char c;

    printf("input data: \n");
    if(scanf("%d",&num)==1){
        ;printf("\nan integer");
    }else if(scanf("%f",&fnum)){
        printf("\nA float ");
    }else if(scanf("%s",&c)==1){
        printf("\na string");
    }

    // int sums;
    // char ch;
    // printf("enter character:\n");
    // scanf("%c",&ch);

    // if(isdigit(ch)){
    //     printf("%c is a digit\n",ch);
    //     sums=ch + ch;
    //     printf("\n%d",sums);
    // }else{
    //     printf("\n%c is not a digit",ch);
    // }
    return 0;
}