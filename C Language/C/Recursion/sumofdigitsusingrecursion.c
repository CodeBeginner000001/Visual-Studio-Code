#include<stdio.h>
int sum(int num)
{
    if(num==0)
      return 0;
    else
      return num%10+sum(num/10);
}
int main()
{
    int num;
    printf("Enter the number for which u want to find the sum of number:");
    scanf("%d",&num);
    printf("Sum of the number entered is:%d",sum(num));
}