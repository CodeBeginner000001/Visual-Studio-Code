#include<stdio.h>
int main()
{
    char c;
    printf("Enter  the character for which you want to find:");
    scanf("%c",&c);
    if(c>64&&c<91)
    {
        printf("The character    %c    is a Uppercase alphabet.",c);
    }
    else
    {
        printf("The character   %c   is a lowercase alphabet.",c);
    }
}