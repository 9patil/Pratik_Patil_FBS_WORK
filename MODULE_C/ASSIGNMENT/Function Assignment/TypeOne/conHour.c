//convrt into hour
#include<stdio.h>
void getHour();
void main()
{
	getHour();
}
void getHour()
{
	
 	int min = 123;
 	int hr = min / 60;
    int mi = min % 60;
 	printf ("%d hours & %d min",hr,mi);
 
}