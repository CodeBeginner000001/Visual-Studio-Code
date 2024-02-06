#include<stdio.h>
int main()
{
    int num,reverse=0;
    int number;
    printf("Enter the number to find if palindrome or not:");
    scanf("%d",&num);
    number=num;
    while(num!=0)
    {
        reverse=num%10+reverse*10;
        num=num/10;
    }
    printf("\nThe reverse of the number entered is:%d",reverse);
    if(reverse==number)
    {
        printf("\nThe number is a palindrome");
    }
    else
    {
        printf("\nThe number is not a palindrome");
    }
}

