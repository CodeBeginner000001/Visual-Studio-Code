#include<stdio.h>
int main()
{
    int num;
    printf("Enter the year to find the year is leap year or not:");
    scanf("%d",&num);
    if(num%4==0)
    {
        printf("The year is a leap year");
    }
    else
    {
        printf("The year is a not a leap year");
    }
}