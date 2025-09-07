//total marks
#include<stdio.h>
void getMarks();
void main()
{
	getMarks();
}
void getMarks()
{
		int English, Marathi, Hindi, History, Geography;
	
	printf("Enter English Marks- ");
	scanf("%d",&English);
	
	printf("Enter Marathi Marks- ");
	scanf("%d",&Marathi);
	
	printf("Enter Hindi Marks- ");
	scanf("%d",&Hindi);
	
	printf("Enter History Marks- ");
	scanf("%d",&History);
	
	printf("Enter Geography Marks- ");
	scanf("%d",&Geography);
	
	int Total= English + Marathi + Hindi + History + Geography ;
	printf("Total Marks of Five Subject- %d \n",Total);
	
	float Percentage = (Total/500.0)*100;
	printf("The Percentage is- %0.2f", Percentage);
}