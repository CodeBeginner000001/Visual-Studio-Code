#include<stdio.h>
int main()
{
    int num, last_digit,first_digit,s=0;
    printf("Enter the number to find the sum of first and last digit of the entered number:");
    scanf("%d",&num);
    last_digit=num%10;
    while(num>=10)
    {
     num=num/10;
    }
    first_digit=num;
    s=first_digit+last_digit;
    printf("\n sum  of first and last digit : %d",s);

}