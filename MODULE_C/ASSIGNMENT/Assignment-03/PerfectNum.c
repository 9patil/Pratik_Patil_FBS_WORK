//Number is perfect or not
#include<stdio.h>
void main()
{
	int num,sum=0;
	int i= 1;
	printf("Enter a Num: ");
	scanf("%d",&num);
	
	while (i<=num/2)
	{
		
    	if (num % i==0)
    	{
	     	sum=sum + i;
     	}
     	  i++;
    }
        	if (num==sum)
        	{
	          printf("This Perfect Number");
	 
             }
         	else
        	{
              printf("This is Not Perfect Number");
             }
}