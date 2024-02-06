#include<stdio.h>
#include<math.h>
int main()
{
    float p,pp,mt,g; // This is for the marks
    float c; // Calculate the total percentage scroed by student
    float s=0; //this is to calculate the total sum of marks scored by the student
    float a=0;  // this is the total marks a student can score
    int i,n;  // for loop to execute  
    printf("Enter the number of subjects marks you want to enter:");  // number of subject u want to enter
    scanf("%d",&n);
    
   
   
    for(i=1;i<=n;i++)  // to allow user to input the marks for the no of subject chosen
    {
        printf("\n\n\nEnter the max marks student can score:");
        scanf("%f",&mt);
        printf("Enter the marks student has obtained:");
        scanf("%f",&p);
        pp=(p/mt)*100;
        s=s+p;
        a=a+mt;

          if (pp>=90)  // if else execute to tell the grade
   {
       printf("\nYour grade in subject %d : A",i);
       printf("\nYour grade is A with a percentage score of : %.2f",pp);
   } 
   else if (pp>=80 && pp<90)
   {
       printf("\nYour grade in subject %d : B",i);
       printf("\nYour grade is B with a percentage score of : %.2f",pp);
   }
   else if (pp>=70 && pp<80)
   {
       printf("\nYour grade in subject %d  : C",i);
       printf("\nYour grade is c with a percentage score of : %.2f",pp);
   }
   else if(pp>=60 && pp<70)
   {
       printf("\nYour grade in subject %d : D",i);
       printf("\nYour grade is D with a percentage score of : %.2f",pp);
   }
    else if(pp>=40 && pp<60)
   {
       printf("\nYour grade in subject %d : E",i);
       printf("\nYour grade is E with a percentage score of : %.2f",pp);
   }
    else if(pp<40)
   {
       printf("Your grade in subject %d : F",i);
       printf("\nYour grade is F with a percentage score of : %.2f",pp);
   }

    }

    printf("\n\nThe total marks from each subject is : %f",s);
    printf("\nThe total marks is out of: %f",a);      // total for above marks entered
    c=(s /a)*100;


     if ( c>=90)     // tell the final grade of the student
   {
       printf("\nYour grade is: A");
       printf("\nYour grade is A with a percentage score of : %.2f",c);
   } 
   else if (c>=80 && c<90)
   {
       printf("\nYour grade is: B");
       printf("\nYour grade is B with a percentage score of : %.2f",c);
   }
   else if (c >=70 && c<80)
   {
       printf("\nYour grade is : C");
       printf("\nYour grade is C with a percentage score of : %.2f",c);
   }
   else if (c >=60 && c <70)
   {
       printf("\nYour grade is : D");
       printf("\nYour grade is D with a percentage score of : %.2f",c);
   }
    else if (c >=40 && c <60)
   {
       printf("\nYour grade is : E");
       printf("\nYour grade is E with a percentage score of : %.2f",c);
   }
    else if (c <40)
   {
       printf("\nYour grade is: F");
       printf("\nYour grade is F with a percentage score of : %.2f",c);
   }
}
