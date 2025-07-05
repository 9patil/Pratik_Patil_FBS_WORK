//To find greatest of three numbers using nested if-else.


#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Print Three Num :" );
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		printf("Greater value is A");
	}
	else if(b>a)
	{
		printf("Greater value is B");
	}
	else
	{
		printf("Greater value is c");
	}
}