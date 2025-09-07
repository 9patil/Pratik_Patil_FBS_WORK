// print no 1 to 10 using while loop
#include<stdio.h>
void getprint();
void main()
{
	getprint();
}
void getprint()
{
	int i=1;
	
	while(i<=10)
	{
		printf("%d\n",i++);
	}
}