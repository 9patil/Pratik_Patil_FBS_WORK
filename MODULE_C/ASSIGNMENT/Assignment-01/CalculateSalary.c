//Calculating total salary

#include<stdio.h>
void main(){
	
	double bs;
	printf("Enter Basic salary- ");
	scanf("%lf",&bs);
	double da,ta,hra,totalsalary;	
	 
	 if (bs<=5000){
	 	da=bs*0.10;
	 	ta=bs*015;
	 	hra=bs*0.20;
	 }
	 else {
	 	da=bs*0.15;
	 	ta=bs*0.25;
	 	hra=bs*0.30;
	 	
	 }
	 totalsalary=da+ta+hra+bs;
	 printf("This is Total Salary - %lf",totalsalary);
}