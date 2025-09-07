//sum of range
#include<stdio.h>
void getRange();
void main()
{
	getRange();
}
void getRange()
{
	
	int start=1;
	int end;
	int sum = 0;
	printf ("Enter a num: ");
	scanf("%d",&end);
	
	while (start<=end)
	{
		sum= sum + start;
		start++;
	}
	printf("%d",sum);
}