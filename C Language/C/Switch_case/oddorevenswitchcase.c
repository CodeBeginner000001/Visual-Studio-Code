#include<stdio.h>
int main()
{
    int ch;
    printf("Enter the number to know if what to check for even or odd:");
    scanf("%d",&ch);
    switch(ch%2==0)
    {
        case 0 : printf("Number is odd: %d",ch);
                 break;
        default : printf("number is even: %d",ch);
                 break;
    }
}