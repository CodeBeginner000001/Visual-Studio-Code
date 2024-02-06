#include<stdio.h>
int main()
{
    int i,a,f=1;
    printf("enter the number to find the factorial:");
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
      f=f*i;
    }
    printf("factorial for %d is = %d",a,f);
    return 0;

}
