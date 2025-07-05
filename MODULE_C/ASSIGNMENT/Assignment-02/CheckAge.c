//Age and check if the person is

#include<stdio.h>
int main()
{
	int age;
	printf("Enter Age : ");
	scanf("%d",&age);
	
	if(age<12)
	{
		printf("This Person is Child \n");
	}
	
	else if (age >= 12 && age <= 19)
	{
		printf("This Person is Teenager \n");
	}
	
	else if(age >= 20 && age <= 59)
	{
		printf("This is Adult \n");
	}
	
	else if(age >= 60)
	{
		printf("This person is Senior \n");
	}
	else {
	
		printf("Invalid age");
	}
	return 0;
}