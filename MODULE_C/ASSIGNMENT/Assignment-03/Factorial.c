//Number is Factorial 
#include<stdio.h>
void main()
{
	int num,i= 1,fact= 1;
	printf("Enter a Number : ");
	scanf("%d",&num);
	
	while (i<=num)
	{
	     fact= fact*i;
	    	i++;
		
	}
	printf("This Number Factorial is:%d ", fact);


}