#include<stdio.h>
int main()
{
    float a;
    float b;
    printf("enter the value in fahrenheit to convert it in celsuis:");
    scanf("%f", &a);
    b=(a-32)*5/9;
    printf("value after conversion:%f",b);

}