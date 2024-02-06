#include<stdio.h>
#include<conio.h>
int main()
{ int A; // intput from user for operator
int a=1;
char X;
int b=2;
int c=3;
int d=4;
int e=5;
int f=6;
int g=7;
int h=8;
int i=9;

do{
printf(" Choose an operator for which u want to see an example from the list given below :- \n");
printf("1. Arithmetic Operator\n");
printf("2. Relational Operator\n");
printf("3. Logical Operator\n");
printf("4. Bitwise Operator\n");
printf("5. Assignment Operator\n");
printf("6. Increment and decrement Operator\n");
printf("7. Conditional Operator\n");
printf("8. Arithmetic assignment operator\n");
printf("9. Size of Operator\n");
printf("Enter :");
scanf("%d",&A);


//Arithmetic Operator
if(A==a)   
{
int a,b; // for input of the numbers
int add,diff,multi,div,mod,incre,decre;
printf("You have chosen Arithmetic Operator so please enter two numbers below \n");
printf("Number 1:");
scanf("%d",&a);
printf("Number 2:");
scanf("%d",&b);
add=a+b;
diff=a-b;
multi=a*b;
div=a/b;
mod=a%b;
incre=++a; // either numbers
decre=--b; // either numbers
printf("\nAddition of the entered numbers is ( %d + %d ):%d",a,b,add);
printf("\nSubtraction of the entered number is (%d - %d ):%d",a,b,diff);
printf("\nMultiplication of the entered number is (%d * %d ):%d",a,b,multi);
printf("\ndivision of the enter number1/number2 is (%d / %d ):%d",a,b,div);
printf("\nmodulus(Remainder) of the entered number is (%d,%d):%d",a,b,mod);
printf("\nincrement is ++a (%d):%d",a,incre);
printf("\ndecrement is --b (%d):%d",b,decre);

}

//Relational Operator
else if(A==b)  
{
int a,b; // for input of the numbers
int lt,lte,gt,gte,et,net;
printf("You have chosen Relational Operator so please enter two numbers below \n");
printf("Number 1:");
scanf("%d",&a);
printf("Number 2:");
scanf("%d",&b);
lt=(a<b);
lte=(a<=b);
gt=(a>b);
gte=(a>=b);
et=(a==b);
net=(a!=b);
printf("\n%d  is less than  %d  ~  %d",a,b,lt);
printf("\n%d  is less than equal to  %d  ~  %d",a,b,lte);
printf("\n%d  is Greater than  %d  ~  %d",a,b,gt);
printf("\n%d  is Greater than equal to %d  ~  %d",a,b,gte);
printf("\n%d  is Equal to  %d  ~  %d",a,b,et);
printf("\n%d  is not equal to  %d  ~  %d",a,b,net);
}

//Logical Operator
else if(A==c)   
{
int a,b,c,d; // for input of the numbers
int lao,loo,lno,lno2;
printf("You have chosen Logical Operator so please enter four numbers below \n");
printf("Number 1:");
scanf("%d",&a);
printf("Number 2:");
scanf("%d",&b);
printf("Number 3:");
scanf("%d",&c);
printf("Number 4:");
scanf("%d",&d);
lao=(a<b)&&(c>d);
loo=(a<b)||(c>d);
lno=!(a<b);
lno2=!(c>d);
printf("\n(%d  <  %d)  &&  (%d  >  %d)  ~  %d",a,b,c,d,lao);
printf("\n(%d  <  %d)  ||  (%d  >  %d)  ~  %d",a,b,c,d,loo);
printf("!(%d  <  %d)  ~  %d\n",a,b,lno);
printf("!(%d  >  %d)  ~  %d\n",c,d,lno2);
}

//Bitwise Operator
else if(A==d)  
{
int a,b; // for input of the numbers
int Ls,Xor,Band,Bor;
float Rs;
unsigned int Comp;
printf("You have chosen Bitwise Operator so please enter two numbers below \n");
printf("Number 1:");
scanf("%d",&a);
printf("Number 2:");
scanf("%d",&b);
Ls=a<<b;
Rs=a>>b;
Xor=a^b;
Comp=~a;
Band=a&b;
Bor=a|b;
printf("\n%d<<%d:%d",a,b,Ls);
printf("\nThis is the Bitwise Left shift opeartor in which the data is manupilated at bit level so this will shift binary code %d to toward left by %d and the output will show the number that has the binary code that is changed",a,b);

printf("\n\n%d>>%d:%f",a,b,Rs);
printf("\nThis is the Bitwise right shift opeartor in which the data is manupilated at bit level so this will shift binary code %d to toward right by %d and the output will show the number that has the binary code that is changed",a,b);

printf("\n\n%d^%d:%d",a,b,Xor);
printf("\nThis is Bitwise XOR operator in which the data is manupilated at bit level so it will perform using logic of XOR Gate(%d'.%d+%d.%d') and give the output in binary",a,b,a,b);

printf("\n\n~%d:%d",a,Comp);
printf("\nThis is Bitwise NOT operator in which the data is manupilated at bit level so it will perform using logic of NOT Gate(A') and give the output in binary",a);

printf("\n\n%d & %d:%d",a,b,Band);
printf("\nThis is Bitwise And operator in which the data is manupilated at bit level so it will perform using logic of AND Gate(%d.%d) and give the output in binary",a,b);

printf("\n\n%d|%d:%d",a,b,Bor);
printf("\nThis is Bitwise OR operator in which the data is manupilated at bit level so it will perform using logic of OR Gate(%d+%d) and give the output in binary",a,b);
}

// Assignment Operator
else if(A==e)   
{
int a=10;
int b=5;
int c;
printf("You have chosen Assignment Operator and following output is an example of assignment operator\n");
c=a+b;
printf("It will solve the equation c=%d+%d as in the program c is assigned to solve the values that are already assigned to variables %d & %d and give the sum output:%d",a,b,c);
}

// Increment and decrement Operator
else if(A==f)  
{
int a=10,b,c;
printf("You have chosen Increment and Decrement Operator and a=10 , b , c have been already initialized in the program\n");
printf("\nInitially a has a value of 10\n");
a++; // it will take the value to a and then increment it by 1
printf("\nThe output is a form of a++\n");
printf("\na=%d",a);
++a; // it will increment first then add the value of a
printf("\nThe output is a form of ++a\n");
printf("\na=%d",a);
b=a++; // it will take the value to a and then increment it by 1
c=++a; // it will increment first then add the value of a
printf("\na=%d,b=%d,c=%d",a,b,c); // the value of a is already the same as in code line 137
}

//Conditional Operator
else if(A==g)    
{
int num;
printf("You have chosen conditional operator in which you have this expression (exp1?exp2:exp3)\n");
printf("\nEnter the number to know if number is odd or even as well as positive or negative:");
scanf("%d",&num);
(num>0)?printf("\n Number is %d positive",num):printf("\n Number %d is negative",num);
(num%2==0)?printf("\n Number %d is even",num):printf("\n Number %d is odd",num);
}

// Arithmetic assignment Operator
else if(A==h) 
{
printf("You have chosen Arithmetic assignment Operator \n");
printf("It consist of five operator:-\n");
printf("1. =  \t  a=b  \t  a=b\n");
printf("2. +=  \t  a+=b  \t  a=a+b\n");
printf("3. -=  \t  a-=b  \t  a=a-b\n");
printf("4. *=  \t  a*=b  \t  a=a*b\n");
printf("5. /=  \t  a/=b  \t  a=a/b\n");
printf("\nUsing these we can assign different values to same variable");
}

//size of Operator
else if(A==i) 
{
int a;
float b;
double c;
char e;
printf("\nYou have chosen Size of Operator and here are the sizes of the data types:-");
printf("Size of int:%lu bytes\n",sizeof(a));
printf("Size of float:%lu bytes\n",sizeof(b));
printf("Size of double:%lu bytes\n",sizeof(c));
printf("Size of char:%lu bytes\n",sizeof(e));
}

printf("\nDo you want to check for an another operator(y/n):");
X=getch();
getch();
}while(X=='y'||X=='Y');
}

