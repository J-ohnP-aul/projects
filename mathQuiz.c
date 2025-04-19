#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int response;
    int *answer;
    int *opt1;
    int *opt2;
    char *result;
    int x;

    srand(time(NULL));

    printf("\nMath quiz\n\n");
    printf("enter # of problems: ");
    scanf("%d", &response);
    
    //allocation of enogh mem based on que the user wishes to take

    opt1 = (int *) calloc(response, sizeof(int));
    opt2 = (int *) calloc(response, sizeof(int));
    answer  = (int *) calloc(response, sizeof(int));
    scanf("%d", &response);

    if(opt1==NULL || answer==NULL || result==NULL){
        printf("\nOut of memmory");
        return 0;
    }

    for(x=0; x<response; x++){
        opt1[x] = rand() % 100;
        opt2[x] = rand() % 100;

        printf("\n%d + %d =",opt1[x], opt2[x]);
        scanf("%d", &answer[x]);

        if(answer[x] == opt1[x]+opt2[x])
            result[x] = 'c';
        else
            result[x] = 'i';
    }

    printf("\nquiz result\n");
    printf("\nQuestion\tYour answer\tCorrect");

    //dply result

    for(x=0; x<response; x++){
        if(result[x]=='c')
            printf("%d + %d\t\t%dNo\n",opt1[x], opt2[x], answer[x]);
        else    
            printf("%d + %d\t\t%dNo\n",opt1[x], opt2[x], answer[x]);
    }

    //free mem
    free(opt1);
    free(opt2);
    free(answer);
    free(result);


    return 0;
}