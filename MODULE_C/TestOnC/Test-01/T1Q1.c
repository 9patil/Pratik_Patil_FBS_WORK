//convert time entered in hh, min and sec into total seconds

#include<stdio.h>
void main()
{
 int hours, minutes, seconds;
    long int total_seconds; 

    // Prompt for input
    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Enter seconds: ");
    scanf("%d", &seconds);
	
	total_seconds = (long int)hours * 3600 + (long int)minutes * 60 + seconds;

    // Print the result
    printf("Total seconds: %ld\n", total_seconds);

  
	
}
