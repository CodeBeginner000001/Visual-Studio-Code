#include<stdio.h>
#include<math.h>
int main()
{
    int a1=0,a2=1,n,a3;
    printf("Enter number till u want to print fibonacci series:");
    scanf("%d",&n);
    printf(" %d  %d",a1,a2);
    for(int i=2;i<=n;i++)
    {
        a3=a1+a2;
        printf(" %d",a3);
        a1=a2;
        a2=a3;
    }
}