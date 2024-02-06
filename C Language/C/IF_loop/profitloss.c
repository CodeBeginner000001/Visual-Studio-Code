#include<stdio.h>
int main()
{
    float sp,cp,p;
    printf("Please enter the cost price of the product:");
    scanf("%f",&cp);
    printf("Please enter the selling price of the product:");
    scanf("%f",&sp);
    p=cp-sp;
    if(p<0)
    {
        printf("The profit from the product after selling: %.2f",(-1)*p);
    }
    else if(p==0)
    {
        printf("No lose.");
    }
    else
    {
        printf("The lose from the product after selling: %.2f",(-1)*p);
    }

}