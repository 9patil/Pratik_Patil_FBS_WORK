//find two maximum number in array

#include<stdio.h>

int main(){
	int arr[]={12, 45, 7, 23, 89, 5, 43}; 
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int min = arr[0];
	int max = arr[0];
	
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	printf("minimum value is: %d \n", min);
	printf("maximum value is: %d \n", max);
	                            
	return 0;
}