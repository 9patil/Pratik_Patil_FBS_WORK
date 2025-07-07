//Last and first digit sum
#include<stdio.h>
void main()
{
	int num=12345;
	int rem;
	int ld = num % 10;
	
	while (num>0)
	{
		rem = num % 10;
		num = num / 10;
	}
	int sum= ld + rem;
	
	printf("Sum is :%d ",rem,num ,sum);
}