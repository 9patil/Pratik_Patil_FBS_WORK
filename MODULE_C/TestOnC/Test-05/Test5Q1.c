//calculate selling price of book based on cost price and discount 


//calculate selling price of book

#include<stdio.h>

void SellingPrice(int costP,float dis);
int main()
{
	 int costP;
	 float dis;
	 
	 printf("enter cost price : ");
	 scanf("%d",&costP);
	 printf("enter the discount in % : ");
	 scanf("%f",&dis);
	 
	 SellingPrice(costP,dis);
	 
}

void SellingPrice(int costP,float dis)
{
	float sellP = (costP - (costP*dis)/100.0);
	 
	 printf("%f ",sellP);
}