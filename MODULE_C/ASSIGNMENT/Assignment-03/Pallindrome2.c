//Num is Palindrome or not 

#include<stdio.h>
void main()
{
	int num,sum=0,rev=0;
	printf("Enter a Number: ");
	scanf("%d", &num);
	int temp=num;
	
	while (num!=0)
	{
		int rem= num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	if ( temp == rev)
	{
	     printf("This Number is Palindrome ");
    }
	else 
	{
		   printf("This Number is Not Palindrome ");  
	}
}