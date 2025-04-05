//allows a vle b tstd against many cases excld  more if 
#include<stdio.h>
int main()
{
    char grade;

    printf("\nEnter the your grade\n");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("\nideal grade man");
            break;
        case 'B':
            printf("\nyou did best");
            break;
        case 'C': 
            printf("\nyou did okay");
            break;
        case 'D':
            printf("\nDiel Dog Dala u");
            break;
        case 'F':
            printf("\nYou failled");
            break;
        default:
            printf("\npliz enter valid grades(A,B,C,D,F)");
            break;
    
    return 0;
        
    }

}