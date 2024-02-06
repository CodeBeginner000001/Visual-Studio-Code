#include<stdio.h>
int main()
{
    char c;
    printf("Enter for knowing whether it is alphabet ,numberic or special character:");
    scanf("%c",&c);
    if((c>='a'&& c<='z')|| (c>='A'&&c<='Z'))
    {
        printf("Entered thing   %c    is a alphabet.",c);
    }
   else if(c>='0' && c<='9')
    {
        printf("Entered thing  %c  is a digit.",c);

    }
    else 
    {
        printf(" Entered thing %c is a special character.",c);
    }
}