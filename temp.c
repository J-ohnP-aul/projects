#include <stdio.h>
float toCelsius(float temp);
float toFahrenheit(float temp);
float temp,result;

int main()
{   
    int opt;
    printf("\t1.to convert farenheit to celcius:");
    printf("\n\t2.to convert celcius to farenheight:\n");
    printf("\tenter option: ");
    scanf("%d",&opt);


    if(opt == 1){
        printf("\n\tEnter the temperature in Fahrenheit: ");
        scanf("%f",&temp);
        result = toCelsius(temp);
        printf("\n\t%.2f Celsius\n", result);
    }else if(opt == 2){
        printf("\n\tEnter the temperature in celcius: ");
        scanf("%f",&temp);
        result = toFahrenheit(temp);
        printf("\n\t%.2f Fahrenheit\n", result);
    }else{
        printf("invalid input");
    }

    return 0;
}
float toCelsius(float temp){
    float result = (temp-32)*(5.0 /9.0);
    return result;
}
float toFahrenheit(float temp){
    float result = (9.0 / 5.0 * temp) + 32;
    return result;
}