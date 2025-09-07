//get Fahrenheit
#include<stdio.h>
void getFahrenheit();
void main()
{
	getFahrenheit();
}

void getFahrenheit()
{
	float c,f;
	printf("Enter celsius: ");
	scanf("%f",&c);
	f = ((c *9/5) + 32);
	printf("Fahrenheit is:%f ",f);
	
}