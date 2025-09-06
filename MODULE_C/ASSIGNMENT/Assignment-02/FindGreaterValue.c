//To find greatest of three numbers using nested if-else.


#include<stdio.h>
void main()
{
	int a;
	int b;
	int c;
	printf("Print first Num :" );
	scanf("%d",&a);
	printf("Print second Num :" );
	scanf("%d",&b);
	printf("Print Three Num :" );
	scanf("%d",&c);
	
	if (a>c)
	{
		
		if(a>b)
		{
			printf("Greater value is A");
		}
		else 
		{
			printf("Greater value is B");
		}
	}
	else
	{
	
		if (b>c)
		{
			printf("Greater value is B");
		}
		else 
			printf("Grater value is C");
	}

}
