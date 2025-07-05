//Check the charactor Uppercase or Lowercase
#include<stdio.h>
void main(){
	char ch ;
	printf("Enter the charactor- ");
	scanf("%c",&ch);
	
	if (ch>='A' && ch<='Z'){
		printf("This is upper case- %c", ch);
	}
	else
	{
		printf("This is Lowercase-  %c",ch);
	}
	
}