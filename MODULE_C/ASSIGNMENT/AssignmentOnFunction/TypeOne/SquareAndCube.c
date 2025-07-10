//Find Square and Cube 
#include<stdio.h>
void getCube();
void main()
{
	getCube();
}
void getCube()
{
	int num = 2 ;
  printf("Enter a Number - ");
  scanf("%d",&num);
  
  int sq = num * num ;
  printf("The Square is - %d \n" , sq);
 
  int cu = num*num*num;
  printf("The Cube is - %d", cu);
}