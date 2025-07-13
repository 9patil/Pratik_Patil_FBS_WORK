//menu driven

#include<stdio.h>
void main()
{
//	int no;
	char opt;
   printf("sr   choise      ");
   printf("\n 1   Even Odd   ");
   printf("\n 2   Prime No    ");
   printf("\n 3   Pallindrome ");
   printf("\n 4   Check Num   ");
   printf("\n 5   Reverse Num ");
   printf("\n 6   Sum         ");
  
   printf("\nChoose one option:- ");
   scanf("%c", &opt);
   
  //check even or odd  
   if (opt=='1')
   {
   	      int num;
   	      printf("Enter a Num: ");
   	      scanf("%d",&num);
   	  if (num%2==0)
		 {
   	  	    printf("No is Even");
		 }
		 else 
		 {
		 	printf("No is Odd");
		 }
   	   
   }
   
  //prime or not  
   if (opt=='2')
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
   
 //palindrome or not  
 
   if (opt=='3')
   {
   	 int num,sum=0,rev=0;
	printf("Enter a Number: ");
	scanf("%d", &num);
	int temp=num;
	
	
	while (num!=0)
	{
		int rem= num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	if ( temp == rev)
	{
	     printf("This Number is Palindrome ");
    }
	else 
	{
		   printf("This Number is Not Palindrome ");  
	}
   }
   
//check Number is Positive Negative 

   if (opt=='4')
   {
   	int no ;
   	printf("Enter a Number to check: ");
   	scanf("%d",&no);
   	
      	if (no<=0)
   	  {
	     printf("This no is Positive ");
	   }
	   else 
	   {
	   	printf("This is Negative");
	   }
   }
   
//Reverse number
   if(opt=='5')
   {
   	int num, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;          
        reversedNum = reversedNum * 10 + remainder; 
        num /= 10;                     
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNum);
   }
   
//Sum of two digit
   
   if (opt=='6')
   {
   	int a,b,sum;
   	printf("Enter First Num: ");
   	scanf("%d",&a);
   	printf("Enter Second Num: ");
   	scanf("%d",&b);
   	
   	sum= a+b;
   	printf("Sum is :%d ",sum);
   }
   
}