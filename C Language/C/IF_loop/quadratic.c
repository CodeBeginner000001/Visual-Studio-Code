#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    float r1,r2,im;
    printf("Enter the value for the quadratic equation value(ax^2+bx+c):");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-4*a*c;
    if(d>0)
    {
       r1=(-b+sqrt(d))/(2*a);
       r2=(-b-sqrt(d))/(2*a);
       printf("Two distinct and  real root exists:%.2f and %.2f",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=-b/(2*a);
        printf("Two equal and real root exists:%.2f and %.2f",r1,r2);
    }
    else
    {
      r1=r2=-b/(2*a);
      im=sqrt(-d)/(2*a);
      printf("Two distinct complex roots exists: %.2f +%.2fi and %.2f-%.2fi",r1,im,r2,im);
    }
}