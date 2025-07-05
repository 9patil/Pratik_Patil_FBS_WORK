#include<stdio.h>
void main()
{

	int a = 20;
	int b = 30;
	printf("Before Swap value is>>> a =%d , b = %d <<<.\n ",a,b);
	
	int temp = a ;
    	a = b ;
	    b = temp;

	printf("\\n After swap the numbers >>> a = %d  b = %d<<<",a ,b);
}