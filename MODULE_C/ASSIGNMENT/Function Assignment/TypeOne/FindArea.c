//Area of circle 
#include<stdio.h>

void findArea();
void main()
{
	findArea();
}

void findArea()
{
	int radius = 6 ;
  
  	float pie = 3.14;
  
  	float area = radius * radius * pie ;
  
  		printf("Area of circle is - %f ", area);
}