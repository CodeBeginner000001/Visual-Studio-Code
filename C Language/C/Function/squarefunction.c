#include<stdio.h>
int square(int num)
{
  return num*num;
}
int main()
{
  int num,fun;
  printf("enter the number to find the square of the number:");
  scanf("%d",&num);
  printf("The square of the number is:%d",square(num));
}