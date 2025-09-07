#include<stdio.h>
void getAmRange();
void main()
{
	getAmRange();
}
void getAmRange()
{
	int i=1,n,sum=0;
	
	printf("Enter the limit for amstrong (N): ");
	scanf("%d",&n);

	
	for (;i<=n;i++)
	{
		int temp = i;
		sum = 0;
		
		while (temp!=0)
	{
		int rem=temp % 10;
		sum=sum + rem * rem * rem;
		temp=temp / 10;
	}
	if (i== sum)
	{
		printf("%d ",i);
	}
	}
}