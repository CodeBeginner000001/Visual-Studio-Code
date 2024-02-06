#include<stdio.h>
int main()
{
    printf("\nEven numbers from 1 to 100: ");
    for(int i=0; i<=100 ; i++)
    {
        if(i%2==0)
        {
            printf("\n%d",i);
        }
    }
}