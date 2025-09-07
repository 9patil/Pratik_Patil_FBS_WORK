#include<stdio.h>

void getEvenOdd();
void main()
{
	getEvenOdd();
}
void getEvenOdd()
{
	int n;
	printf("Enter a digit: ");
	scanf("%d",&n);
	
	if (n%2==0)
		printf("Even");
	else
		printf("Odd");
	
}