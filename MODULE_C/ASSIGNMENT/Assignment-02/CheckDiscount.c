//Discount distribuction

#include<stdio.h>
void main()
{
	double price;
	char choice;
	
	printf("Enter Price- ");
	scanf("%lf",&price);
	
	fflush (stdin);
	printf("Are you student y or n - ");
	scanf("%c",&choice);
	double totalprice;
	
	if (choice=='y')
	{
	   
	   if (price >=500)
	       totalprice=price-price*0.15;
	   else
	       totalprice=price-price*0.10;
    }
    else
    {
		 if (price > 600)
           totalprice=price-price*0.10;
        else
           totalprice=price;
    }
    printf("The total price is %lf",totalprice);
}