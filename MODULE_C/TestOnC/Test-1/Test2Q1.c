//Number is positive , negative or neutral
#include<stdio.h>
void main()
{
	int n;
	printf("Enter A number");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("The value is Positive");
    }
	else if(n==0)
	{
		printf("The value is Neutral");
	}
	
    else if(n<0) 
	{
		printf("The value is Negative");
	}
	else
	{
		printf("This value is invalid");
	}
}
	 