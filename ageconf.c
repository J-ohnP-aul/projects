#include<stdio.h>
int main() {
        int age;
    printf("\n enter age ");
    scanf("%d", &age);

    if(age >= 18){
        printf("We ni mzee saka ID na dem pia");
    }
    else if(age < 0){
        printf("YOH YOH!!! STILL NOT BORN beyond the cosmos");
    }
    else{
        printf("still at your prime medi na masomo mse");
    }
}