//find common elements in two arrays.

#include<stdio.h>
int main()
{
	int arr[6],temp=0;
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\n");
	
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("last 2 maximun no are : ");
	for(int j=5;j>3;j--)
	{
		printf("%d ",arr[j]);
	}
	
}