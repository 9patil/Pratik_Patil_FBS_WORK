//Find Reactangle of Perimeter
#include<stdio.h>
void main(){
	
	int l,b;
	printf("Enter Length -");
	scanf("%d",&l);
	printf("Enter breadth -");
	scanf("%d",&b);
	int p= 2*(l+b);
	printf("The Perimeter is - %d " ,p );
}