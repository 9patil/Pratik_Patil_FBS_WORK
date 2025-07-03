//Enter marks and show the result

#include<stdio.h>
void main()
{
   int marks;
   printf("Enter the marks - ");
   scanf("%d",&marks);
   
   if (marks>= 75)
   {
       printf("Distnetion");
   }
       else if (marks>=65)
   	   {
   	    	printf("First class");
	   }
	   else if (marks>=55)
	   {
	   	    printf("Second class");
	   }
	   else if(marks>=40)
	   {
	        printf("pass class");
	   }
    else
	{
	    printf("fail");
    }
	   
	   
 }
   
   