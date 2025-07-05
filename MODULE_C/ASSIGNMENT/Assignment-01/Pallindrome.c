//Check the number is Pallindrome or Not

#include<stdio.h>
void main(){
	
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
    printf("This Number is palindrome");
    else
    printf("This Number is not palindrome");
	
}