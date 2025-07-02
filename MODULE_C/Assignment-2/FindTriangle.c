//Find triangle is equilateral, isosceles, or scalene.

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter Three sides of Triangle:" );
	scanf("%d %d %d",&a,&b,&c);
	
	if (a==b && a==c)
	{
		printf("This Triangle is Equilateral ");
	}
	else if (a==b || b==c || a==c)
	{
		printf("This Triangle is Isosceles ");
	}
	else 
	{
		printf("This Triangle is Scalene ");
	}
}