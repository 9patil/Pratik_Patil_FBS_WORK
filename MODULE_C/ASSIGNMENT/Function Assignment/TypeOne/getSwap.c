//Swap
#include<stdio.h>
void getSwap();
void main()
{
	getSwap();
}

void getSwap()
{
	int a,b ;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	
	printf("a is =%d",a);
	printf("\nb is =%d",b);
	
	printf("\n-----\\After Swaping//-----");
	
	int temp =a;
		a=b;
		b=temp;
		
			printf("\na is =%d",a);
			printf("\nb is =%d",b);
		
		
		
	
 
}