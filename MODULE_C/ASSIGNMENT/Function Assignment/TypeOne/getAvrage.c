//Avrage of Five number
#include<stdio.h>

void getAvg();
void main()
{
	getAvg();
}
void getAvg()
{
	int a,b,c,d,e;
	a=10;
	b=20;
	c=30;
	d=40;
	e=50;
	
	int avg= ((a+b+c+d+e)/5);
	printf("Avrage is : %d",avg);
}