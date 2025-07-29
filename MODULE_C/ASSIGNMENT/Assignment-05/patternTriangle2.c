//star triangle ulta 

#include<stdio.h>
void main()
{
	int n=5;
//	printf("enter a num");
//	scanf("%d",&n);
//	
	for (int i=1; i<=n;i++)
	{
	 for (int j=1; j<=n+1-i; j++)
	 {
	 	printf("*");
	 }
	 printf("\n");
		
	}
}
	 
			