#include<stdio.h>
int square(int num)
{
  return num*num*num;
}
int main()
{
  int num,fun;
  printf("enter the number to find the cube of the number:");
  scanf("%d",&num);
  printf("The cube of the number is:%d",square(num));
}