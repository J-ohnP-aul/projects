#include<stdio.h>
int main()
{   
    int num, numval;
    char name[] = "noble";
    printf("Enter an integer : \n");
    scanf("%d",&num);
    numval = sizeof(num);
    printf("%d\n",num);

    printf("%i",numval);

    return 0;
}