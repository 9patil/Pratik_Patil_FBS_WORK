#include<stdio.h>
void getTable();
void main()
{
	getTable();
}
void getTable()
{
	int t=5;
	int i=1;
	
	while(i<=10)
	{	
		printf("%d\n",t*i);
		i++;
	}
}