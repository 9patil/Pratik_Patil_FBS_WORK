#include<stdio.h>
void getFact();
void main()
{
	getFact();
}
void getFact()
{
	int num, i= 1;
	long int fact= 1;
	printf("Enter a Number : ");
	scanf("%d",&num);
	
	
	while (i<=num)
	{
	     fact= fact*i;
	    	i++;
		
	}
	printf("This Number Factorial is:%d", fact);
}