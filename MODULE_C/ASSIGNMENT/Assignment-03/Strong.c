//Number is storng 
#include<stdio.h>
void main()
{
	int num, fact = 1 , sum = 0;
	printf("Enter a Number : ");
	scanf("%d",&num);
	int temp = num ;
	
	while ( num!=0)
	{
		int rem = num % 10;
		fact = 1;
		for (int i= 1; i<= rem; i++)
		{
			fact= fact*i;
		}
		sum= sum+fact;
		num=num/10;
	}
	if (temp==sum)
	{
		printf("This Number is Strong: ");
	}
	else 
	{
		printf("This Number is Not Strong ");
	}
}