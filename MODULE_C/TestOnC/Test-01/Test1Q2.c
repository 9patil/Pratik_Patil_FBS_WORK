//check if the year is leap or not
#include<stdio.h>
void main()
{
	
	int year ;
	printf("Enter the Year: ");
	scanf("%d",&year);
	
	if(year % 4 == 0 && year %100!=0 || year % 400 ==0){
		printf("this is leap year");
	}
	else {
		printf("this is not leap year");
	}
}