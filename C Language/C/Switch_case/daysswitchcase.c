#include<stdio.h>
int main()
{
    int days,a;
    printf("Enter the month (1-12) for which you want to know the no of days:");
    scanf("%d",&days);
    switch(days)
    {
        case 1: printf("The month entered is January with number of days:");
                printf("31");
                break;


        case 2: printf("Please enter the year:");
                scanf("%d",&a);
                if(a%4==0)
                {
                    printf("Entered year is a leap year with no of days:");
                    printf("29");
                }
                else
                {
                  printf("Entered year is not a leap year with no of days:");
                  printf("28");
                }
                break;

        case 3: printf("The month entered is March with number of days:");
                printf("31");
                break;

        case 4: printf("The month entered is April with number of days:");
                printf("30");
                break;

        case 5: printf("The month entered is May with number of days:");
                printf("31");
                break;

        case 6: printf("The month entered is June with number of days:");
                printf("30");
                break;

        case 7: printf("The month entered is July with number of days:");
                printf("31");
                break;

        case 8: printf("The month entered is August with number of days:");
                printf("31");
                break;

        case 9: printf("The month entered is September with number of days:");
                printf("30");
                break;

        case 10: printf("The month entered is October with number of days:");
                printf("31");
                break;

        case 11: printf("The month entered is November with number of days:");
                printf("30");
                break;

        case 12: printf("The month entered is December with number of days:");
                printf("31");
                break;
        default : printf("Entered wrong number!!!!!!");

    }
}