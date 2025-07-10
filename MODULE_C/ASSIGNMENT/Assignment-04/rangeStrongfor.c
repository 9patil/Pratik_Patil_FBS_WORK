//Number is storng 

#include<stdio.h>
void main()
{
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	
	for (int j=1; j<=num;j++)
	{
	int temp = j;
	int sum = 0;
	while ( temp!=0)
	{
		int rem = temp % 10;
    	int fact = 1;
		for (int i= 1; i<= rem; i++)
		{
			fact= fact*i;
		}
		sum= sum+fact;
		temp=temp/10;
	}
	 if (j==sum)
	 {
	  printf("%d\n",j);
     }
    }

}