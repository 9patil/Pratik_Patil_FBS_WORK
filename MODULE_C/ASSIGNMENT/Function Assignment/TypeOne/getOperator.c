//Two Numbers from User and an Operator (+,-,/,*,%) 
#include<stdio.h>
void getOp();
void main()
{
	getOp();
}
void getOp()
{
	int a,b,sum;
	printf("Enter First Number ");
	scanf("%d",&a);
	printf("Enter First Number ");
	scanf("%d",&b);
	
	sum=a+b;
	printf("\n \n The Addition- %d " ,sum);
	
	sum=a-b;
	printf("\n \n The Substraction is - %d " ,sum);
	
	sum=a*b;
	printf("\n \n The Multiplicaton is - %d ",sum);
	
	sum=a/b;
	printf("\n \n The Dividation is - %d " ,sum);
	
	sum=a%b;
	printf("\n \n This is Modulo %d " ,sum);
}