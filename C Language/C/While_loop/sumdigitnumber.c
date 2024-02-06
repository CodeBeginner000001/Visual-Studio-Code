#include<stdio.h>
int main()
{
    int num,r,s=0;
    printf("Enter the number to find the sum of digits of a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        s+=r;
        num=num/10;
    }
    printf("Sum of the digits of a number: %d",s);
}

