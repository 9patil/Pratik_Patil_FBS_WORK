//Convert into Hours
#include<stdio.h>
void getHours();
void main()
{
	getHours();
}
void getHours()
{
	int min = 123;
 	int hr = min / 60;
    int mi = min % 60;
 	printf ("%d hours & %d min",hr,mi);
}