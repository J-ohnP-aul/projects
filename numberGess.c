#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

// #define Type(x)_Generic((x),int: "int",char[2]: "char")

int inptDta(void);
int main ()
{
    system("clear");
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;
    char iq;
    char iq1[] = "lower";
    char iq2[] = "middle";
    char iq3[] = "high";

//utilise curent time as aseed
    srand(time(0));

//min=offset blow gen ran no btwn min and max

    answer = (rand() % MAX) + MIN;
    // printf("%d",answer);

    while(guess != answer){
        printf("\nEnter a guess: ");
        // scanf("%d", &guess);
        guess = inptDta();
        if(guess > answer)
        {
            printf("Too high sorry,\a !!\n");
            putchar('\a');
            
        }
        else if(guess < answer)
        {
            printf("too low man");
        }
        else{
            printf("CORRECT !!\n");
        }
        
        guesses++;
    };

    if(guesses < 20){        
        printf("************************\n");
        printf("answer: %d\nYour iq level is a little bit: %s\n", answer, iq3);
        printf("guesses: %d\n", guesses);
        printf("************************");
    }else if (guesses > 20 && guesses < 30)
    {
        printf("************************\n");
        printf("answer: %d\nYour iq level is in the %s\n", answer, iq2);
        printf("guesses: %d\n", guesses);
        printf("************************");
    }else{
        printf("************************\n");
        printf("answer: %d\nYour iq level is alittle bit: %s\n", answer, iq1);
        printf("guesses: %d\n", guesses);
        printf("************************");
    }


    

    return 0;
} 
int inptDta(void){
    int num;
    char input[50];
    printf("Number >>: ");
    fgets(input,sizeof(input),stdin);

    //remove newline ch
    input[strcspn(input, "\n")] = 0;

    //check if char are digits;
    int i;
    for(i=0; input[i] != '\0'; i++)
    {
        if(!isdigit(input[i])){
            printf("Error the input is not an integer!!\n");
            return 1;//exit with error code
        }
    }

    // convert string to int
    num = atoi(input);
    printf("you entered: %d\n",num);
    
    return num;
}