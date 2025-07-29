#include<stdio.h>
void main()
{
	int n =4;
	
	for (int i=1; i<=n;i++){
		char a=1;
	
		for(int j=1; j<=n;j++)
		{
			int d = a+64;
			char ch =(char)d;
			
			printf("%c",ch);
			a++;
		}
		printf("\n");
	}
}