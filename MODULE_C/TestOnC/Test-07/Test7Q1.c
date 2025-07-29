//Array is the palindrome or not (using function)

#include<stdio.h>
int main()
{
	int arr[10];
	for (int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int s=0, e=4 ,c=0;
	while (s<e/2)
	{
		if(arr[s] == arr[e])
		{
			s++;
			e--;
		}
		else{
			
		c++;
		printf("not palindrome");
		break;
 	}
	}
	if (c==0)
	printf("is Palindrome");
}