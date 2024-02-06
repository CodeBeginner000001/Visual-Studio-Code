#include<stdio.h>
unsigned long long int fact(unsigned long long int num)
{
    if(num==0)
        return 1;
    else
        return num*fact(num-1);
}
int main()
{
    unsigned long long int num;
    printf("Enter the number to find the factorial:");
    scanf("%d",&num);
    printf("The factorial of number is:%llu",fact(num));
}
