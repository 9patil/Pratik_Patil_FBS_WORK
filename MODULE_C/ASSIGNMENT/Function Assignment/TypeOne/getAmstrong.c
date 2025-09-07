//Number is Amstrong or not
#include<stdio.h>
void getAmstrong();
void main()
{
	getAmstrong();
}
void getAmstrong()
{
	 int num, rem,sum=0;
	printf("Enter a Number: ");
	scanf("%d",&num);
	int temp=num;
	while (num > 0)
	{
		rem=num % 10;
		sum=sum + rem * rem * rem;
		num=num / 10;
	}
	if (sum==temp)
	    printf("This Number is Amstrong");
	    
	    else
	        printf("This Number is Not Amstrong");
}