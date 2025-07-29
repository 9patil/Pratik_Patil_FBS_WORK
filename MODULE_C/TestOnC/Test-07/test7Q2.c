//exchange data at x th and y th position of arry
#include<stdio.h>

int main()
{
	int arr[10],temp=0;
	int x=3, y=5;
	for (int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	temp=arr[x-1];
	arr[x-1]= arr[y - 1];
	arr[y-1]=temp;
	
	printf ("arry after swap");
	for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}