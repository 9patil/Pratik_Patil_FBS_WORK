//perfect numbers in the given range 1 to n.
#include<stdio.h>
void getRangeperfect();
void main()
{
	getRangePerfect();
}
void getRangePerfect()
{
	int main(){
	int num;
	printf("Enter a Num: ");
	scanf("%d",&num);
	
	for (int i=1;i<=num;i++){
		int sum = 0;
		for(int j=1; j<=sqrt(i); j++){
			if(i%j==0){
				sum += j;
				if(j*j != i && j != 1){
					sum += i/j;
				}
			}
		}
		if (i == sum && i != 1){
			printf("%d\n", i);
		}
}