//print solid sqare pattern

#include<stdio.h>
void main()
{
	int n;
	printf("enter a num");
	scanf("%d",&n);
	
	for (int i=1 ; i<=n;i++)
	{
		for (int i=1; i<=n;i++){
			printf("*");
		}
		printf("\n");
	}
}