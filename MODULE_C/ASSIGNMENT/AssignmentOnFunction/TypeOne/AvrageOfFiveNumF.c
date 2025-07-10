//Avrage of Five Numbers using fun

#include<stdio.h>
void getAvrage();
void main()
{
	getAvrage();
}
void getAvrage()
{
  int a= 2;
  int b=7;
  int c=19;
  int d=24;
  int f=25;
  
  int sum = a + b + c + d + f ;
  float avg = sum / 5 ;
  printf("The Avrage of Five Num is %f", avg);
}
