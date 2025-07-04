//

//Check electricity Unit
#include<stdio.h>
void main()
{
	int u,totalbill;
	printf("Enter units:-");
	scanf("%d",&u);
	
	if (u>=1 && u<=50)
	{
		totalbill=u*30;
	}
	else if(u>=51 && u<=150)
	{
		totalbill=u*40;
	}
	else if (u>=151)
	{
		totalbill=u*50;
	}
	else
	{
		printf("Invalid");
	}
	printf("Total bill is : %d", totalbill);
}