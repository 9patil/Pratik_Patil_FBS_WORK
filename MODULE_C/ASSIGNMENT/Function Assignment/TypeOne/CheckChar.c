//check charactor uppercase or lowercase

#include<stdio.h>
void CheckChar();
void main()
{
	CheckChar();
}
void CheckChar()
{
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