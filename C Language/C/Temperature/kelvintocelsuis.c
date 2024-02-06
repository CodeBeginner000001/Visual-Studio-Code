#include<stdio.h>
int main()
{
    float a;
    float b;
    printf("Please enter the temperature in kelvin to convert in celsuis:");
    scanf("%f" , &a);
    b=a-273.15;
    printf("The value after conversion is:%f",b);
    return 0;
}    

