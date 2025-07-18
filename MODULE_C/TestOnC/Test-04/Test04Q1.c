//print factor in given range 10 to 15 

#include<stdio.h>
void main()
{
    int start;
	int end;
	int num;
	int i;
	
	printf("Enter start value: ");
	scanf("%d",&start);
	
	printf("Enter end value: ");
	scanf("%d",&end);
	
	for (num = start; num <= end; num++) {
        printf("Factors of %d: ", num);
        
         for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                printf("%d ", i);
            }
            
        }
        printf("\n");
	}
}