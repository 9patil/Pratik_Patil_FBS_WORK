//Get Area of Triangle
#include<stdio.h>
void getTriangle();
void main()
{
	getTriangle();
}
void getTriangle()
{
	float b,h;
	printf("Enter Base - ");
	scanf("%f",&b);
	printf("Enter Height - ");
	scanf("%f",&h);
	
	float area= 0.5*b*h;
	printf("The Area of Triangle is- %f", area);
}