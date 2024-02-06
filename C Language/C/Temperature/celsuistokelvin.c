#include<stdio.h>
int main()
{
    float a;
    float b;
    printf("Please enter the temperature in celuis to convert in kevin:");
    scanf("%f" , &a);
    b=a+273.15;
    printf("The value after conversion is:%f",b);
    return 0;
}    

