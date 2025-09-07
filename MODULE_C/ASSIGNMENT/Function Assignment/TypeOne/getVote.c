//check eligibal for vote 
#include<stdio.h>
void getVote();
void main()
{
	getVote();
}
void getVote()
{
	
	int age;
	printf("Enter Age: ");
	scanf("%d",&age);
	
	if (age >= 18){
	printf("eligible");
     }  
     
    else {
    	printf("not eligible");
	}
}