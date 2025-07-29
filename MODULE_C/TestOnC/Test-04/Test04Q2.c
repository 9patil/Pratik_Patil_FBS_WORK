// power of number

#include<stdio.h>

int main()
{
	int no,pov,power=1;
	
	printf("enter the no :");
	scanf("%d",&no);
	printf("enter the power :");
	scanf("%d",&pov);
	
	for(int i=1;i<=pov;i++)
	{
		 power=power*no;
	}
	
	printf("ans is : %d ",power);
}