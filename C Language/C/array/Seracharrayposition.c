#include<stdio.h>
int main()
{
    int a[6];
    int b;
    printf("Enter the array of number:");
    for(int i=0;i<=6;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number you want to search in array entered:");
    scanf("%d",&b);
    for(int c=0;c<=6;c++)
    {
        if(b==a[c])
        {
            printf("\n Entered number found in %d position :%d",c,b);
            printf("\n Found number in array at position:%d",c);
             break;
        }
        else
        {
            printf(" \n Not in the %d position of array",c);
        }
    }
    
}