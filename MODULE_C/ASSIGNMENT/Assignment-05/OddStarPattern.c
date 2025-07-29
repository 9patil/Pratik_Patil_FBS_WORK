#include<stdio.h>
   void main()
   {
    int n=6;
    for(int i=1; i<=n;i++)
    {
    	int a=1;
        for(int j= 1; j<=i; j++)
        {
            printf("%d",j);
            a = a+2;
        }
        printf("\n");
    }
   }