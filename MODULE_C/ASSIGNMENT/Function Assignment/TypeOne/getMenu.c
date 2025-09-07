//menu driven
#include<stdio.h>
void getMenu();
void main()
{
	getMenu();
	
}
void getMenu()
{
	while (1)
	{
	
	
printf("//----------------------------//");	
	printf("\n1 Even or Odd\n");
	printf("2 Prime or Not\n");
	printf("3 Pallindrome or Not\n");
	printf("4 Amstrong Or Not\n");
	printf("5 Perfect Or not \n");
	printf("6 Exit \n");
printf("//----------------------------//");
	
	int choice;
	printf("\nEnter Choice");
	scanf("%d",&choice);

	//even odd
	if (choice==1)
	{
		int num;
			printf("Enter a number: ");
			scanf("%d",&num);
		if (num %2 ==0)
			printf("Even");
		else
			printf("Odd");
	}
	
	//Prime or not
	 else if (choice==2)
	{
		 int num, i, isPrime = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("This is NOT a Prime Number\n");
      
    }

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0; 
        }
    }

    if (isPrime == 1)
        printf("This is a Prime Number");
    else
        printf("This is NOT a Prime Number");
		
	}
	
	//Pallindrome or not
	else if (choice ==3)
	{
		int num,temp,rev=0,rem;
	
	printf("Enter Three digit Num- ");
	scanf("%d",&num);
	temp=num;
    rem=num %10;
    rev=rev*10+ rem;
    num=num/10;
    rem=num % 10;
    rev=rev*10+rem;
    num=num/10;
    rem=num%10;
    rev=rev*10+rem;
    if (temp== rev)
    
    printf("This Number is Palindrome");
    else
    printf("This Number is Not Palindrome");
		
	}
	
	//Amstrong or not
	else if (choice == 4)
	{
	int num, rem,sum=0;
	printf("Enter a Number: ");
	scanf("%d",&num);
	int temp=num;
	
	while (num > 0)
	{
		rem=num % 10;
		sum=sum + rem * rem * rem;
		num=num / 10;
	}
	if (sum==temp)
	        printf("This Number is Amstrong");
	    
	    else
	        printf("This Number is Not Amstrong");	
	}
	
	
	//perfect number
	else if (choice == 5)
	{
	int num,sum=0;
	int i= 1;
	printf("Enter a Num: ");
	scanf("%d",&num);
	
	while (i<=num/2)
	{
		
    	if (num % i==0)
    	{
	     	sum=sum + i;
     	}
     	  i++;
    }
        	if (num==sum)
        	{
	          printf("This Perfect Number");
	 
             }
         	else
        	{
              printf("This is Not Perfect Number");
             }
	}
	else if  (choice ==6)
	{
	
		printf("Exiting...\n");
			break;
	}
	else
	{
		printf("Invalid Choice\n");
	}
	
	}
}