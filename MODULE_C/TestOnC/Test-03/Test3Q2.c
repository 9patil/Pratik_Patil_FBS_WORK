//Add alternate numbers 
#include<stdio.h>
void main()
{
	int start, end ;
	printf("Enter Rang for Alternate sum: ");
	scanf("%d %d",&start,&end);
	int sum=0;
	
	for (int i=start; i <=end; i=i+2)
	{
		sum+=i;
	}
	printf("Sum=%d ",sum);
}