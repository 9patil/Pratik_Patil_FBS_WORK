//Range Even Odd

#include<stdio.h>

void printEven(int start, int end)
{
    	printf("\neven:-");
    	for (int i=start; i<=end;i++)
    	{
    		if (i % 2==0);
    		printf("%d ",i);
		}    			
}

void printOdd(int start,int end)
{
    	printf("Odd:-");
    	for (int i=start; i<=end;i++)
    	{
    		if (i % 2 != 0 );
    		printf("%d ",i);
		}    			
}

int main() {
	
    int start, end;


    start = 10;
    end = 25;
    
    printOdd(start,end);

    start = 1;
    end = 15;
    printEven(start, end);

    return 0;
}
    