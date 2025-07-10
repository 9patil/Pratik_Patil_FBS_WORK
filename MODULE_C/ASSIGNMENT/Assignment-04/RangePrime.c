//prime number 1 to n

#include<stdio.h>
void main()
{
	int min=1,max, i , j, count;
	
	printf("Enter the limit for prime (N): ");
	scanf("%d",&max);
	
	for (i=min; i<=max; i++)
	{
		count=0;
		
		for (j=1; j<=i; j++)
		{
			if (i % j==0)
			{
				count++;
			}
	    }
	    
			if (count==2)
			{
			
			    printf("%d ",i);
	     	}
		
    }
	
	

}