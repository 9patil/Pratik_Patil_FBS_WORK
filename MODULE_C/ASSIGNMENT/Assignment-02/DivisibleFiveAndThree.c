//Divisible by 3 but not by 5

#include<stdio.h>
void main()
{
	int num;
	printf("Enter a Num-");
	scanf("%d",&num);
	
	if (num % 3==0 && num % 5==0)
	   printf("Number is Divisible by both \n");
	
	else if (num % 3 ==0)
	   printf("Number is Divisible by 3 not 5 \n");
	
	else if (num % 5 == 0)
	   printf("Number is Divisible by 5 not 3 \n");
	
	else 
	    ("Divisible by None number \n");
}