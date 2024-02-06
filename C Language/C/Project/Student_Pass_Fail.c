#include<stdio.h>
int main()
{
    int a,b,c,d,s;
    s=a+b+c+d;
    printf("enter marks of all four subjects :-");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    (a>=50)?printf("\n student passed in first subject"):printf("\n student has failed in first subject ");
    (b>=50)?printf("\n student passed in second subject"):printf("\n student has failed in second subject ");
    (c>=50)?printf("\n student passed in third subject"):printf("\n student has failed in third subject ");
    (d>=50)?printf("\n student passed in fourth subject"):printf("\n student has failed in fourth subject ");
    if( s>=200 && a>=50 && b>=50 && c>=50 && d>=50 )
    {
        printf("\n student has passed");

    }
    else
    {
       printf("\n student has failed");
    }
    return 0;
}